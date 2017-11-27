#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,num;
	cin>>t;
	while(t--)
	{
		cin>>num;
		if(num%6==0)cout<<"Misha\n";
		else cout<<"Chef\n";
	}
	return 0;
}
