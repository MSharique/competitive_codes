#include<iostream>
#include<cstdio>
#include<algorithm>
#include<numeric>
#include<climits>
using namespace std;

int arr[101];

int main()
{
	int t,n,k,sum1,sum2,ans;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ans = INT_MIN;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		//cout<<"\n arr : ";
		//for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
		sum1 = sum2 = 0;
		sum1 = accumulate(arr,arr+k,sum1);
		sum2 = accumulate(arr+k,arr+n,sum2);
		//cout<<"\n first k sum : "<<sum1<<" , last n-k sum  :: "<<sum2<<endl;
		ans = max(ans , abs(sum1-sum2));
		sum1 = sum2 = 0;
		sum1 = accumulate(arr,arr+n-k,sum1);
		sum2 = accumulate(arr+n-k,arr+n,sum2);
		//cout<<"\n first n-k sum : "<<sum1<<" , last .... sum  :: "<<sum2<<endl;
		ans = max(ans , abs(sum1-sum2));
		cout<<ans<<endl;
	}
	return 0;
}
