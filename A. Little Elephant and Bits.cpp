#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	int arr = -1;
	string str;
	cin>>str;
	int len = str.size();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='0' && arr==-1)arr = i;
	}
	if(arr==-1)for(int i=1;i<len;i++)cout<<str[i];
	else for(int i=0;i<len;i++)if(i!=arr)cout<<str[i];
	return 0;
}
