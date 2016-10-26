#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int n,five,zero;
	cin>>n;
	int temp;
	five = zero = 0;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if(temp==5)five++;
		else zero++;
	}
	if(zero==0)cout<<-1;
	else if(five<9)cout<<0;
	else
	{
		five  = (five - 9)/9 + 1;
		five = 9 + 9*(five-1);
		for(int i=0;i<five;i++)cout<<5;
		for(int i=0;i<zero;i++)cout<<0; 
	}
	return 0;
}

