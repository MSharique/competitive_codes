#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		if(i%15==0)cout<<"FizzBuzz\n";
		else if(i%5==0)cout<<"Buzz\n";
		else if(i%3==0)cout<<"Fizz\n";
		else cout<<i<<endl;
	}
	return 0;
}
