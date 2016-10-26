#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string a;
	int min1 , min2 , max1 , max2;
	cin>>a;
	int len = a.length();
	min1 = 0;
	for(int i=0;i<len;i++)
	{
		int dig = a[i]-'0';
		if(dig==6)dig = 5;
		min1 = min1*10;
		min1 = min1 + dig;
	}
	max1 = 0;
	for(int i=0;i<len;i++)
	{
		int dig = a[i]-'0';
		if(dig==5)dig = 6;
		max1 = max1*10;
		max1 = max1 + dig;
	}
	cin>>a;
	len = a.length();
	min2 = 0;
	for(int i=0;i<len;i++)
	{
		int dig = a[i]-'0';
		if(dig==6)dig = 5;
		min2 = min2*10;
		min2 = min2 + dig;
	}
	max2 = 0;
	for(int i=0;i<len;i++)
	{
		int dig = a[i]-'0';
		if(dig==5)dig = 6;
		max2 = max2*10;
		max2 = max2 + dig;
	}
	//cout<<"\n min1 = "<<min1<<" , max1 = "<<max1<<endl;
	//cout<<"\n min2 = "<<min2<<" , max2 = "<<max2<<endl;
	
	min1 = min1 + min2;
	max1 = max1 + max2;
	cout<<min1<<" "<<max1;
	return 0;
}
