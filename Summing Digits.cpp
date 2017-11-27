#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	long long int x;
	while(cin>>x)
	{
		if(x==0)break;
		x = x % 9;
		if(x==0)x = 9;
		cout<<x<<endl;
	}
	return 0;
}
