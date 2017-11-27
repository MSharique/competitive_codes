#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,one,zero;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		one = 0;
		zero = 0;
		int len = str.length();
		for(int i=0;i<len;i++)
		{
			if(str[i]=='1')one++;
			else zero++;
		}
		if(one==1 || zero==1)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}
