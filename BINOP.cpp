#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	string str,arr;
	cin>>t;
	while(t--)
	{
		cin>>str>>arr;
		int len = str.length();
		int l,r;
		bool first = true;
		for(int i=0;i<len;i++)
		{
			if(str[i] != arr[i])
			{
				if(first)l = i;
				else
				{
					r = i;
					first = true;
				}
			}
		}
	}
}
