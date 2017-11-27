#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[21];
int ans[21];

int main()
{
	int t,n,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		ans[0] = arr[0];
		ans[n-1] = arr[n-1];
		for(int i=1;i<n-1;i++)
		{
			if((arr[i-1]%2==0) && (arr[i+1]%2==0))ans[i] = (arr[i-1] + arr[i+1])/2;
			else ans[i] = arr[i];
		}
		sum = 0;
		for(int i=0,j=n-1;i<n/2;i++,j--)
		{
			sum = sum + max(abs(arr[i]-arr[j]) , max(abs(ans[i]-ans[j]), abs(ans[i]-arr[j])) );
		}
		cout<<sum<<endl;
	}
	return 0;
}
