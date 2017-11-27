#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

vector<bool> prime(100001,true);

void fun()
{
	prime[0] = 0;
	prime[1] = 0;
	for(int i=2;i<=100001;i++)
	{
		if(prime[i])
		{
			for(int j=i*2;j<=100001;j+=i)prime[j]=false;
		}
	}
}

int main()
{
	int t,num;
	cin>>t;
	fun();
	while(t--)
	{
		cin>>num;
		if(prime[num])cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}

