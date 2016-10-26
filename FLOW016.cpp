#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t,a,b,g,l;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		g = __gcd(a,b);
		a = a*b;
		l = a/g;
		cout<<g<<" "<<l<<endl;
	}
	return 0;
}
