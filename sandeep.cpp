#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int num,st;
	cin>>num;
	int temp = num * 5;
	int it = num;
	st = 1,temp = temp-num+1;
	for(int i=0;i<num;i++)
	{
		int prev = temp;
		for(int j=it;j>0;j--)
		{
			cout<<"*"<<st++;
		}
		for(int j=it;j>0;j--)
		{
			cout<<"*"<<temp++;
		}
		it--;
		cout<<endl;
		temp = prev - (num-i) + 1;
	}
	return 0;
}
