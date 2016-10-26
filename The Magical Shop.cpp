#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;

int  main()
{
	int a,b;
	string str;
	cin>>a>>b>>str;
	long long int ans,temp;
	temp = a%b;
	//ans = temp;
	int len = str.length();
	ans  = 0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='1')
		{
			ans = (ans%b) + (temp%b) ;
			ans = ans % b;
		}
		temp = ((temp%b)*(temp%b))%b;
	}
	cout<<ans;
	return 0;
}
