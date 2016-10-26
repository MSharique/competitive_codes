#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,k,p,cs=1;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>p;
		p = p + k;
		p = p % n;
		if(p==0)p = n;
		cout<<"Case "<<cs++<<": "<<p<<endl;
	}
	return 0;
}
