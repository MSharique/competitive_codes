#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t,ca = 1;
	string s,st;
	cin>>t;
	while(t--)
	{
		cin>>s>>st;
		int len = s.length();
		int ans = 0  ,fac = 1;
		if(s[len-1]!=st[len-1])
		{
			ans = ans + st[len-1]-s[len-1];
			d--;
			if
		}
		for(int i=len-2;i>=0;i--)
		{
			if(s[i]!=st[i])
			{
				int d = st[i]-s[i];
				d--;
				if(d < 0)d+=26;
				fac = 26*(len-1 - i);
				ans = ans + d*fac;
			}
		}
		cout<<"Case "<<ca++<<": "<<ans<<endl;
	}
	return 0;
}
