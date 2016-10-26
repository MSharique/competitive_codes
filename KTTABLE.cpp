#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int slot[10003];
int cook[10003];

int main()
{
	int t,n,cnt,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>slot[i];
		for(int i=0;i<n;i++)cin>>cook[i];
		cnt = 0;
		if(cook[0] <= slot[0])cnt++;
		for(int i=1;i<n;i++)
		{
			temp = slot[i] - slot[i-1];
			if(temp >= cook[i])cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
