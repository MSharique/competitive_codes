#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	string str,str1;
	cin>>t;
	while(t--)
	{
		cin>>str>>str1;
		if(str.size()  > str1.size())
		{
			int len = str.size();
			int len1 = str1.size();
			int i,j;
			for(i=0,j=0;i<len && j<len1;i++)
			{
				if(str[i]==str1[j])j++;
			}
			if(j==len1)cout<<"YES\n";
			else cout<<"NO\n";
		}
		else
		{
			int len = str.size();
			int len1 = str1.size();
			int i,j;
			for(i=0,j=0;i<len && j<len1;j++)
			{
				if(str1[j]==str[i])i++;
			}
			if(i==len)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}
