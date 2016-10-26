#include<iostream>
#include<cstdio>
using namespace std;

bool don[100003];

int main()
{
	
	int n,t;
	cin>>n;
	don[0] = false;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		don[t] = 1;
	}
	for(int i=1;i<=n;i++)if(!don[i])cout<<i<<" ";
	return 0;
}
