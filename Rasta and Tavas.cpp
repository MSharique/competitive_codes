#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long int lli;

lli prime[1000003];
bool isprime[1000003];

void seive()
{
	isprime[0]=1;
	isprime[1]=1;
	prime[0] = prime[1] = 0;
	for(int i=0;i<1000003;i++)
	{
		if(!isprime[i])
		{
			if( i*1ll*i <= 1000003)
			{
				for(int j=i+i;j<=1000003;j+=i)
				{
					isprime[j]=1;
					prime[j] = prime[j] + i;
				}
			}
			prime[i] = i;
		}
	}
}

int main()
{
	int n,k;
	seive();
	cin>>n>>k;
	//cout<<"\n prime ARR : ";
	//for(int i=0;i<21;i++)cout<<prime[i]<<" ";cout<<endl;
	cout<<"\n all prime numberws : ";
	for(int i=0;i<1000001;i++)if(!isprime[i])cout<<i<<" ";cout<<endl; 
	int cnt = 0;
	for(int i=0;i<=n;i++)if(prime[i]==k)cnt++;
	cout<<cnt;
	return 0;
}
