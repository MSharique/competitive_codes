#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

char arr[51][51];

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)cin>>arr[i][j];
	}
	int cnt = 0;
	string str = "";
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<m-1;j++)
		{
			str += arr[i][j];
			str += arr[i][j+1];
			str += arr[i+1][j];
			str += arr[i+1][j+1];
			sort(str.begin(),str.end());
			if(str == "acef")cnt++;
			str = "";
		}
	}
	cout<<cnt;
	return 0;
}
