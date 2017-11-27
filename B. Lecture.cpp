#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#include<utility>
using namespace std;

map <string ,string> mp;
map <string,string > :: iterator it;

int main()
{
	int n,m;
	cin>>n>>m;
	string str , str1;
	for(int i=0;i<m;i++)
	{
		cin>>str>>str1;
		mp.insert(make_pair(str,str1));
	}
	for(int i=0;i<n-1;i++)
	{
		cin>>str;
		it = mp.find(str);
		if( it->first.size() <= it->second.size() )cout<<it->first<<" ";
		else cout<<it->second<<" ";
	}
	cin>>str;
	it = mp.find(str);
	if( it->first.size() <= it->second.size() )cout<<it->first;
	else cout<<it->second;
	mp.clear();
	return 0;
}
