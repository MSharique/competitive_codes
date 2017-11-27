#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int key[27];

int main()
{
	string str;
	int n,cnt;
	cin>>n>>str;
	n = 2*n - 2;
	cnt  = 0;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)key[str[i]-'a']++;
		else
		{
			if(key[(char)tolower(str[i])-'a']==0)cnt++;
			else key[(char)tolower(str[i])-'a']--;
		}
	}
	cout<<cnt;
	return 0;
}
