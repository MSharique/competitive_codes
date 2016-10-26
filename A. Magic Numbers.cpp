#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.size() , pos =0;
	for(int i=0;i<len;i++)
	{
		if(pos==0)
		{
			if(str[i]=='1')pos++;
			else pos = 4;
		}
		else if(pos==1)
		{
			if(str[i]=='1')pos = 1;
			else if(str[i]=='4')pos = 2;
			else pos = 4;
		}
		else if(pos==2)
		{
			if(str[i]=='1')pos = 1;
			else if(str[i]=='4')pos = 3;
			else pos = 4;
		}
		else if(pos==3)
		{
			if(str[i]=='1')pos = 1;
			else pos = 4;
		}
		if(pos==4)break;
	}
	if(pos<4)cout<<"YES";
	else cout<<"NO";
	return 0;
}
