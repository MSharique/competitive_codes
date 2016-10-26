#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;

string str;

bool isPrime(int num)
{
	if(num%2==0)return false;
	if(num==1)return false;
	for(int i=3;i*i<=num;i++)
	{
		if(num%i==0)return false;
	}
	return true;
}

int main()
{
	cin>>str;
	int len = str.size();
	for(int i=0;i<len;i++)
	{
		
	}
}
