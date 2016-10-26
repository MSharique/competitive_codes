#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

int main()
{
	int t,l,h;
	cin>>t;
	string str;
	cin>>l>>h;
	while(t--)
	{
		cin>>str;
		if(str[0]=='A')
		{
			int cnt=0;
			for(int i=l;i<=h;i++)
			{
				if(i/100)
				{
					if(i/100 == i%100 && i%100 == (str[1]-'0'))cnt++;
				}
			}
			cout<<cnt<<endl;
		}
		else if(str[0]=='C')
		{
			cout<<"\n wait for call";
		}
		else
		{
			int len = str.size();
			int cnt = 0;
			for(int i=0;i<len;i++)if(str[i]=='W')cnt++;
			cnt  = cnt * 10
		}
	}
}
