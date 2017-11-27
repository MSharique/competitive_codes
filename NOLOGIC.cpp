#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<sstream>
#include<algorithm>
#include<cctype>
#include<cstdlib>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

bool ch[26];

int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
		getline(cin,str);
		//cout<<"\n str : "<<str<<endl;
		//int len = str.size();
		for(int i=0;str[i]!='\0';i++)
		{
			if(isalpha(str[i]))
			{
				if(isupper(str[i]))str[i] = (char)tolower(str[i]);
				ch[str[i]-'a'] = 1;
			}
			else
			{
			//	cout<<"\n spacce \n";
			}
		}
		str="";
		for(int i=0;i<26;i++)
		{
			if(!ch[i])str += (char)(i+'a');
			else ch[i]=0;
		}
		if(str=="")str="~";
		cout<<str<<endl;
	}
	return 0;
}
