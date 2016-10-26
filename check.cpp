#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	string str1 , str2;
	getline(cin,str1);
	getline(cin,str2);
	if(str1.length() != str2.length() )
	{
		cout<<"not equal";
	}
	else
	{
		bool tr = 0;
		for(int i=0;i<str1.length();i++)
		{
			if(str1[i]!=str2[i])
			{
				cout<<"not equal";
				tr = 1;
				break;
			}
		}
		if(!tr)cout<<"equal";
	}
	return 0;
}
