#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int arr[3];

int main()
{
	int t,n,r,g,b,k;
	cin>>t;
	while(t--)
	{
		cin>>arr[0]>>arr[1]>>arr[2]>>k;
		long long int ans=0 ,temp=0;
		sort(arr,arr+3);
		if(arr[0] >= k)
		{
			temp = k -1 ;
			temp = temp * 3;
			temp = temp + 1;
			ans += temp;
		}
		else
		{
			temp = arr[0];
			temp = temp * 3;
			arr[1] -= arr[0];
			arr[2] -= arr[0];
			k = k - arr[0];
			arr[0] = 0;
			ans += temp;
			if(arr[1] >= k)
			{
				temp = k - 1;
				temp = temp * 2;
				temp = temp + 1;
				ans += temp;
			}
			else
			{
				temp = arr[1];
				temp = temp * 2;
				arr[2] -= arr[1];
				k = k - arr[1];
				arr[1] = 0;
				ans += temp;
				ans += k;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
