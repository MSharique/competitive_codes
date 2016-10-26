#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[1003];
int main()
{
	int t,n,m,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		if(n==1)cout<<"Yes\n";
		else {
		sum = 0;
		for(int i=0;i<n;i++)sum = sum + (arr[n-1]-arr[i]);
		if(sum > m)cout<<"No\n";
		else if(sum==m)cout<<"Yes\n";
		else 
		{
			m = m - sum;
			if(m%n==0)cout<<"Yes\n";
			else cout<<"No\n";
		}
		}
	}
	return 0;
}
