#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		if(str==string(str.rbegin(),str.rend()))cout<<"wins\n";
		else cout<<"losses\n";
	}
	return 0;
}
