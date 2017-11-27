#include <bits/stdc++.h>
using namespace std;
int time_given[10004];
int prep[10004];

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>time_given[i];
		for(int i=0;i<n;i++)cin>>prep[i];
		int st = 0;
		int cnt = 0;
		for(int i=0;i<n;i++)
		{
			st = time_given[i] - st;
			if(st >= prep[i])
				cnt++;
			st = time_given[i];
		}
		cout<<cnt<<endl;
	}
	return 0;
}