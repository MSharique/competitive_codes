#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int n,t,num,cnt_f=0;
	cin>>n>>t;
	num = t;
	if(t<10)cnt_f = 1;
	else cnt_f = 2;
	if(cnt_f <= n)
	{
		cout<<t;
		for(int i=cnt_f;i<n;i++)cout<<0;
	}
	else cout<<-1;
	return 0;
}
