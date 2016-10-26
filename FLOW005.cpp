#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t,num,cnt;
	cin>>t;
	while(t--)
	{
		cin>>num;
		cnt = 0;
		//cout<<"\n initial : "<<cnt<<endl;
		cnt += num/100;
		num %= 100;
		//cout<<"\n 100 : "<<cnt<<endl;
		cnt += num/50;
		num %= 50;
		//cout<<"\n 50 : "<<cnt<<endl;
		cnt += num/10;
		num %= 10;
		//cout<<"\n 10 : "<<cnt<<endl;
		cnt += num/5;
		num %= 5;
		//cout<<"\n 5 : "<<cnt<<endl;
		cnt += num/2;
		num %= 2;
		//cout<<"\n 2 : "<<cnt<<endl;
		cnt += num/1;
		num %= 1;
		cout<<cnt<<endl; 
	}
	return 0;
}

