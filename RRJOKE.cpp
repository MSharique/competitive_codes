#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>a>>b;
		a=1;
		for(int i=2;i<=n;i++)a = a ^ i;
		cout<<a<<endl;
	}
	return 0;
}
