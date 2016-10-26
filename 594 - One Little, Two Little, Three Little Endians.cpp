#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int32_t num;
	while(cin>>num)
	{
		cout<<num<<" converts to ";
		num = ( (num<<8) & 0xFF00FF00 |  (num>>8) & 0xFF00FF );
		cout<< ( (num<<16) | ((num>>16) & 0xFFFF) ) <<endl;	
	}
	return 0;
}
