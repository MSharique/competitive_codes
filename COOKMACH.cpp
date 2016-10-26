#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int cnt=0;
		if(a==b)cnt=0;
		else {
			while(a&(a-1))
			{
				a = a/2;
				cnt++;
			}
			while(a<b)a=a*2 , cnt++;
			while(a>b)a=a/2 , cnt++;
		}
			cout<<cnt<<endl;
		
	}
	return 0;
}
