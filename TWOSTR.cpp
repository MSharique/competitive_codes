#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

string x,y;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		int len = x.size();
		bool flag = 1;
		for(int i=0;i<len;i++)
		{
			if(x[i]!=y[i] && x[i]!='?' && y[i]!='?')
			{
				flag= 0;break;
			}
		}
		if(!flag)cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}
