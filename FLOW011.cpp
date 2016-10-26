#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int t,num;
	cin>>t;
	while(t--)
	{
		cin>>num;
		double gross = 0;
		if(num<1500)
		{
			gross = (num*1.0) + (num/10.0) + (0.9 * num);
		}
		else gross = (num*1.0) + 500 + (0.98*num);
		cout<<gross<<endl;
	}
	return 0;
}
