#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int creat[13],need[13];

int main()
{
	int s,sum,req,cs=1;
	while(cin>>s)
	{
		if(s<0)break;
		for(int i=0;i<12;i++)cin>>creat[i];
		for(int i=0;i<12;i++)cin>>need[i];
		cout<<"Case "<<cs++<<":\n";
		sum = s;
		for(int i=0;i<12;i++)
		{
			if(need[i] > sum)
			{
				cout<<"No problem. :(\n";
			}
			else 
			{
				cout<<"No problem! :D\n";
				sum = sum - need[i];
			}
			sum = sum + creat[i];
		}
	}
	return 0;
}
