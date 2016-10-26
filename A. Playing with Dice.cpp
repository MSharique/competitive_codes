#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int first = 0 , draw = 0 , second = 0;
	for(int i=1;i<7;i++)
	{
		if(abs(a-i) < abs(b-i))first++;
		else if(abs(a-i) > abs(b-i))second++;
		else draw++;
	}
	cout<<first<<" "<<draw <<" "<<second;
	return 0;
}
