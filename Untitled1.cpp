#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.length();

 int  fact=1;
	 int num=0;
	 //fact = 1;
	for(int i=len-1;i>=0;i--)
	{
		int temp =fact*(str[i]-'0');
		num=num+temp;
		fact=fact*2;
		
	}
	cout<<num;
	return 0;
}
