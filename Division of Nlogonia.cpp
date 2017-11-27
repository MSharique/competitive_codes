#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,x,y,a,b;
	while(cin>>t)
	{
		if(t==0)break;
		cin>>x>>y;
		while(t--)
		{
			cin>>a>>b;
			if(a>x && b>y)cout<<"NE\n";
			else if(a<x && b>y)cout<<"NO\n";
			else if(a>x && b<y)cout<<"SE\n";
			else if(a<x && b<y)cout<<"SO\n";
			else cout<<"divisa\n";
		}
	}
	return 0;
}
