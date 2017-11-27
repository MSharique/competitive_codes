#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int fir = (n+1);
		fir = fir / 2;
		int flag;
		if(n%2)flag = -1;
		else flag = 1;
		cout<<fir<<" ";
		for(int i=1;i<n;i++)
		{
			fir  = fir + (i*flag);
			cout<<fir<<" ";
			flag = flag * -1;
		}
		cout<<endl;
	}
	return 0;
}
