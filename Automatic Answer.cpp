#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		a = a*315;
		a = a + 36962;
		a = abs(a);
		a = a % 100;
		a = a / 10;
		cout<<a<<endl;
	}
	return 0;
}
