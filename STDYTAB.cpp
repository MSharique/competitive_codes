#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define mod 1000000000

int arr[2001][2001];

int main()
{
	arr[0][0] = 0;
	for(int i=1;i<2001;i++)arr[0][i] = 1;
	for(int i=1;i<2001;i++)arr[i][0] = 0;
	
	for(int i=1;i<2001;i++)
	{
		for(int j=1;j<2001;j++)
		{
			arr[i][j] = ( (arr[i-1][j])%mod + (arr[i][j-1])%mod ) %mod;
		}
	}
	
	/*cout<<"\n arr : \n";
	for(int i=0;i<2001;i++)
	{
		for(int j=0;j<2001;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	int t,n,m;
	long long int ans = 0, temp = 0 , z = 0;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ans = 0;
		if(n==1)
		{
			for(int j=0;j<=m;j++)ans = ((ans%mod) + (arr[j][m]%mod) )%mod;
			cout<<ans<<endl;
		}
		else if(m==1)
		{
			cout<<n+1<<endl;
		}
		else
		{
			for(int i=0;i<=m;i++)
			{
				z = 0;
				//cout<<"\n for row no "<<i<<" , sum ranges till "<<m-i<<endl;
				for(int j=i;j<=m;j++)
				{
					temp = arr[j][m]%mod;
					z = ((z%mod) + (temp%mod))%mod;
				}
				temp = arr[i][m]%mod;
				z = ((z%mod) * (temp%mod))%mod;
				ans = ((ans%mod) + (z%mod))%mod;
			}
			cout<<ans<<endl;
		}
 }
	return 0;
}
