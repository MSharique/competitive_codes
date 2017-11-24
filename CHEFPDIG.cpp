#include <bits/stdc++.h>
using namespace std;

map<int,int> mp;

int main(int argc, char const *argv[])
{
	int t;
	string inp, ans;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<10;i++)
			mp[i] = 0;
		cin>>inp;
		for(int i=0;i<inp.length();i++)
			mp[inp[i]-'0']++;

		ans = "";
		for(char ch='A';ch<='Z';ch++)
		{
			int rem = (int)ch;
			int quot = rem/10;
			rem = rem % 10;
			if(rem==quot)
			{
				if(mp[rem]>1)
					ans += ch;
			}
			else
			{
				if(mp[rem]>0 and mp[quot]>0)
					ans += ch;
				
			}
		}
		cout<<ans<<endl;
		mp.clear();
	}
	return 0;
}