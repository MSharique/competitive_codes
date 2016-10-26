#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,x,n,d,c;
	cin>>t;
	while(t--)
	{
		cin>>x;
		n = x/3;
		d = x % 3;
		bool falg = true;
		while(n>=0)
		{
			if(d%5==0)
			{
				falg = false;
				break;
			}
			d = d + 3;
			n--;
		}
		if(falg)cout<<-1;
		else 
		{
			for(int i=0;i<n*3;i++)cout<<5;
			for(int j=0;j<d;j++)cout<<3;
		}
		cout<<endl;
	}
	return 0;
}
