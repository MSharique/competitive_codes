#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long modexpo(long long a,long long b,int n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n < 3 )cout<<0<<endl;
		else
		{
			int x = modexpo(3,n,MOD);
			int y = modexpo(2,n,MOD);
			x = ((x%MOD) + 3)%MOD;
			y = ( (y%MOD) * 3 ) %MOD;
			x = (x%MOD) - (y%MOD);
			if(x < 0) x = x + MOD;
			cout<<x<<endl;
		}
	}
	return 0;
}
