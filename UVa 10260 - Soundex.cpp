#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

map<char,char> mp;

int main()
{
	mp['A'] = '0';			mp['B'] = '1';
	mp['C'] = '2';			mp['D'] = '3';
	mp['E'] = '0';			mp['F'] = '1';
	mp['G'] = '2';			mp['H'] = '0';
	mp['I'] = '0';			mp['J'] = '2';
	mp['K'] = '2';			mp['L'] = '4';
	mp['M'] = '5';			mp['N'] = '5';
	mp['O'] = '0';			mp['P'] = '1';
	mp['Q'] = '2';			mp['R'] = '6';
	mp['S'] = '2';			mp['T'] = '3';
	mp['U'] = '0';			mp['V'] = '1';
	mp['W'] = '0';			mp['X'] = '2';
	mp['Y'] = '0';			mp['Z'] = '2';
	
	string str,ans;
	while(cin>>str)
	{
		ans = "";
		int len = str.length();
		if(mp[str[0]]!='0')ans+= mp[str[0]];
		else ans = "";
		for(int i=1;i<len;i++)
		{
			if(mp[str[i]] != '0')
			{
				if(mp[str[i]] != mp[str[i-1]])
					ans += mp[str[i]];
			}
		}
		cout<<ans<<endl;
	}
	mp.clear();
	return 0;
}	
