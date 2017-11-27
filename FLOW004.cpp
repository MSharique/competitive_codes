#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	int t,sum;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		sum = (str[0]-'0') + (str[str.size()-1]-'0');
		cout<<sum<<endl;
	}
	return 0;
}
