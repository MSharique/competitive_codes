#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
#define MOD 1000000007

long long int myfunc(long long int a,long long int b)
{
	long long int ans = 1;
	while(b > 0)
	{
		if(b&1)ans = ( (ans%MOD) * (a%MOD) ) % MOD;
		b = b / 2;
		a = ( (a%MOD) * (a%MOD) ) % MOD;
	}
	return ans;
}

int main()
{
	int t;
	long long int n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		n = myfunc(k-1 , n-1);
		n = ( ( k%MOD ) * ( n%MOD ) ) % MOD;
		cout<<n<<endl;
	}
	return 0;
}
