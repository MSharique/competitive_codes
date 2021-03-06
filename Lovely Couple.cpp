#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

bool isprime[1000003];
vector<int> prime;
int N = 1000000;
void seive()
{
	isprime[0] = true;
	isprime[1] = true;
	for(int i=2;i<=N;i++)
	{
		if(!isprime[i])
		{
			prime.push_back(i);
			if( i * 1ll * i <= N)
			{
				for(int j=i*i;j*j<=N;j += i)isprime[j] = true;
			}
		}
	}
}

int main()
{
    seive();
    int t,a,b;
    cin>>t;
    while(t--)
    {
    	cin>>a>>b;
    	int hcf = __gcd(a,b);
    	a = a * b;
    	int lcm = a/hcf;
    	int cnt = 0;
    	for(int i=0;prime[i]*prime[i] <= lcm;i++)
    	{
    		hcf = lcm;
    		while(lcm % prime[i] == 0)
    		{
    			lcm = lcm / prime[i];
    		}
    		if(hcf!=lcm)cnt++;
    	}
    	if(lcm>1)
    	{
    		cnt++;
    	}
    	if(!isprime[cnt])cout<<"Yes\n";
    	else cout<<"No\n";
    }
    prime.clear();
    return 0;
}

