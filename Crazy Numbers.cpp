#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#define MOD 1000000007
using namespace std;

int ans[1000002];
int cnt[10];
int fac[10];
int temp[10];
int main()
{
	int t,n;
	cin>>t;
	for(int i=0;i<10;i++)fac[i]=2;
	fac[0] = fac[9] = 1;
	while(t--)
	{
		cin>>n;
		if(n==1)cout<<10<<endl;
		else
		{
			for(int i=0;i<10;i++)temp[i]=1;
			for(int i=1;i<n;i++)
			{
				for(int j=0;j<10;j++)
				{
					cnt[j] = ( (temp[j]%MOD)*(fac[j]%MOD) ) %MOD;
					cnt[j] = cnt[j]%MOD;
				}
				for(int k=0;k<10;k++)temp[k] = cnt[k];	
			}
			int sum=0;
			for(int i=0;i<10;i++)sum = ( (sum%MOD) + (cnt[i]%MOD) ) %MOD;	
			sum = ((sum%MOD)-1) %MOD;
			if(sum < 0)sum = sum + MOD;
			cout<<sum<<endl;
		}
		
	}
	return 0;
}
