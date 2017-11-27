#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t,mx,mn;
	cin>>t;
	string x,y;
	while(t--)
	{
		mn = mx = 0;
		cin>>x>>y;
		int len = x.size();
		for(int i=0;i<len;i++)
		{
			if(x[i]=='?' && y[i]=='?')mx++;
			else if(x[i]=='?' && y[i]!='?')mx++;
			else if(x[i]!='?' && y[i]=='?')mx++;
			else if(x[i]!=y[i])mn++ , mx++;
		}
		cout<<mn<<" "<<mx<<endl;
	}
	return 0;
}
