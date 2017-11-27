#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool arr[101][101];
string str;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>str;
		for(int j=0;j<t;j++)
		{
			if(str[j]=='x')arr[i][j] = true;
			else arr[i][j] = false;
		}
	}
	bool flag = true;
	int cnt = 0;
	//corner 00
	if(!arr[0][1])cnt++;
	if(!arr[1][0])cnt++;
	if(cnt==1)flag = false;
	cnt = 0;
	//corner 0,t-1
	if(!arr[0][t-2])cnt++;
	if(!arr[1][t-1])cnt++;
	if(cnt==1)flag = false;
	cnt=0;
	//corner n-1,0
	if(!arr[t-2][0])cnt++;
	if(!arr[t-1][1])cnt++;
	if(cnt==1)flag = false;
	cnt=0;
	//corner t-1,t-1
	if(!arr[t-1][t-2])cnt++;
	if(!arr[t-2][t-1])cnt++;
	if(cnt==1)flag = false;
	cnt=0;
	if(!flag)cout<<"NO";
	else
	{
		//first row
		flag = true;
		cnt = 0;
		for(int i=1;i<t-1;i++)
		{
			if(!arr[0][i-1])cnt++;
			if(!arr[1][i])cnt++;
			if(!arr[0][i+1])cnt++;
			if(cnt%2==1)
			{
				flag = false;
				break;
			}
			cnt = 0;
		}
		if(!flag)cout<<"NO";
		else
		{
			flag = true;
			cnt=0;
			//last row
			for(int i=1;i<t-1;i++)
			{
				if(!arr[t-1][i-1])cnt++;
				if(!arr[t-2][i])cnt++;
				if(!arr[t-1][i+1])cnt++;
				if(cnt%2==1)
				{
					flag = false;
					break;
				}
				cnt = 0;	
			}
			if(!flag)cout<<"NO";
			else
			{
				//4-way search
				cnt = 0;
				for(int i=1;i<t-1;i++)
				{
					for(int j=1;j<t-1;j++)
					{
						if(!arr[i][j-1])cnt++;
						if(!arr[i+1][j])cnt++;
						if(!arr[i][j+1])cnt++;
						if(!arr[i-1][j])cnt++;
						if(cnt%2==1)
						{
							flag=false;
							break;
						}
						cnt = 0;
					}
					if(!flag)break;
				}
				if(!flag)cout<<"NO";
				else
				{
					flag = true;
					cnt =0;
					//first column
					for(int i=1;i<t-1;i++)
					{
						if(!arr[i-1][0])cnt++;
						if(!arr[i][1])cnt++;
						if(!arr[i+1][0])cnt++;
						if(cnt%2==1)
						{
							flag = false;
							break;
						}
						cnt=0;
					}
					if(!flag)cout<<"NO";
					else
					{
						flag = true;
						cnt = 0;
						//last column
						for(int i=1;i<t-1;i++)
						{
							if(!arr[i-1][t-1])cnt++;
							if(!arr[i][t-2])cnt++;
							if(!arr[i+1][t-1])cnt++;
							if(cnt%2==1)
							{
								flag = false;
								break;
							}
							cnt = 0;
						}
						if(!flag)cout<<"NO";
						else cout<<"YES";
					}
				}
			}
		}
	}
	return 0;
}
