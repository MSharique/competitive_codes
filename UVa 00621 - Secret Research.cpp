#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	string str,temp;
	
	cin>>t;
	while(t--)
	{
		cin>>str;
		if(str=="1" && str.length()==1)
		{
			cout<<"+\n";
			continue;
		}
		if(str=="4" && str.length()==1)
		{
			cout<<"+\n";
			continue;
		}
		if(str=="78" && str.length()==2)
		{
			cout<<"+\n";
			continue;
		}
		int len = str.length();
		if(len >= 2)
		{
			if(str[len-1]=='5' && str[len-2]=='3')
			{
				cout<<"-\n";
				continue;
			}
			if(str[0]=='9' && str[len-1]=='4')
			{
				cout<<"*\n";
				continue;
			}
			temp = "";
			for(int i=0;i<3;i++)temp += str[i];
			if(temp=="190")
			{
				cout<<"?\n";
				continue;
			}
		}
	}
	return 0;
}

