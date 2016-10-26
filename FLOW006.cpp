#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		a = str.size();
		b = 0;
		for(int i=0;i<a;i++)b = b + (str[i]-'0');
		cout<<b<<endl;
	}
	return 0;
}
