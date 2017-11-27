#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define MOD 1000000007
typedef long long ll;

ll ab_modm(ll base,ll exponent)
{
    ll result = 1;
    while (exponent > 0)
    {
          if (exponent & 1)
             result = (result*base)%MOD;
          exponent >>= 1 ;
          base = (base*base)%MOD;
    }
    return result;
}

int main()
{
    ll n;
    cin>>n;
    ll temp1 = ab_modm(3,3*n);
	n =  ab_modm(7,n);
	n = temp1 - n;
	n = n%MOD;
	if(n<0)n+= MOD;
	cout<<n;
	return 0;
}
