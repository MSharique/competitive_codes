#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int m,n,x,cs=1;
	while(cin>>m>>n)
	{
		if(m==n && n==0)break;
		cout<<"Case "<<cs++<<": ";
		m = m - 1;
		m = m/n;
		if(m > 26 )cout<<"impossible\n";
		else cout<<m<<endl;
	}
	return 0;
}
