#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string str;
	int cnt,n,i,j,temp1,temp2,size=0;
	cin>>str>> n;
	int len = str.size();
	temp1 = len/n;
	for(int i=0;i<n;i++)
	{
		if(len%n || str[i] != str[(i/temp1)*temp1 + temp1 - 1 -(i%temp1)])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
