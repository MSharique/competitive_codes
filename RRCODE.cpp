#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int arr[1003];
int main()
{
	int t,n,k,ans;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>ans;
		for(int i=1;i<=n;i++)cin>>arr[i];
		cin>>str;
		if(str[0]=='X')
		{
			k = k%2;
			for(int i=1;i<=k;i++)
			{
				for(int j=1;j<=n;j++)
				{
					ans  = ans ^ arr[j];
				}
			}
		}
		else if(str[0]=='A')
		{
			k = min(k,1);
			for(int i=1;i<=k;i++)
			{
				for(int j=1;j<=n;j++)
				{
					ans  = ans & arr[j];
				}
			}
		}
		else
		{
			k = min(k,1);
			for(int i=1;i<=k;i++)
			{
				for(int j=1;j<=n;j++)
				{
					ans  = ans | arr[j];
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
