#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#include<utility>
using namespace std;

bool arr[1003][1003];

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)arr[i][j] = false;
	}
	int a,b,cnt;
	for(int it=1;it<=k;it++)
	{
		cin>>a>>b;
		arr[a][b] = true;
		cnt = 0;
		//corner 1,1
		if(a==1 && b==1)
		{
			cnt = 1;
			if(arr[a+1][b])cnt++;
			if(arr[a][b+1])cnt++;
			if(arr[a+1][b+1])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
		}
		//corner 1.m
		if(a==1 && b==m)
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a+1][b-1])cnt++;
			if(arr[a+1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
		}
		//corner n,1
		if(a==n && b==1)
		{
			cnt = 1;
			if(arr[a][b+1])cnt++;
			if(arr[a-1][b+1])cnt++;
			if(arr[a-1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
		}
		//corner n,m
		if(a==n && b==m)
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a-1][b-1])cnt++;
			if(arr[a-1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
		}
		//first row
		if(a==1)
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a+1][b-1])cnt++;
			if(arr[a+1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
			else
			{
				cnt = 1;
				if(arr[a][b+1])cnt++;
				if(arr[a+1][b+1])cnt++;
				if(arr[a+1][b])cnt++;
				if(cnt==4)
				{
					cout<<it;return 0;
				}
			}
		}
		//last row
		if(a==n)
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a-1][b-1])cnt++;
			if(arr[a-1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
			else
			{
				cnt = 1;
				if(arr[a][b+1])cnt++;
				if(arr[a-1][b])cnt++;
				if(arr[a-1][b+1])cnt++;
				if(cnt==4)
				{
					cout<<it;return 0;
				}
			}
		}
		//first column
		if(b==1)
		{
			cnt = 1;
			if(arr[a-1][b])cnt++;
			if(arr[a-1][b+1])cnt++;
			if(arr[a][b+1])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
			else
			{
				cnt = 1;
				if(arr[a][b+1])cnt++;
				if(arr[a+1][b])cnt++;
				if(arr[a+1][b+1])cnt++;
				if(cnt==4)
				{
					cout<<it;return 0;
				}
			}
		}
		//last column
		if(b==m)
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a-1][b-1])cnt++;
			if(arr[a-1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
			else
			{
				cnt = 1;
				if(arr[a][b-1])cnt++;
				if(arr[a+1][b])cnt++;
				if(arr[a+1][b-1])cnt++;
				if(cnt==4)
				{
					cout<<it;return 0;
				}
			}
		}
		//bache hue caSES
		cnt = 1;
		if(arr[a-1][b])cnt++;
		if(arr[a-1][b-1])cnt++;
		if(arr[a][b-1])cnt++;
		if(cnt==4)
		{
			cout<<it;return 0;
		}
		else
		{
			cnt = 1;
			if(arr[a][b-1])cnt++;
			if(arr[a+1][b-1])cnt++;
			if(arr[a+1][b])cnt++;
			if(cnt==4)
			{
				cout<<it;return 0;
			}
			else
			{
				cnt = 1;
				if(arr[a+1][b])cnt++;
				if(arr[a+1][b+1])cnt++;
				if(arr[a][b+1])cnt++;
				if(cnt==4)
				{
					cout<<it;return 0;
				}
				else
				{
					cnt = 1;
					if(arr[a][b+1])cnt++;
					if(arr[a-1][b+1])cnt++;
					if(arr[a-1][b])cnt++;
					if(cnt==4)
					{
						cout<<it;return 0;
					}
				}
			}
		}
	}
	cout<<0;
	return 0;
}
