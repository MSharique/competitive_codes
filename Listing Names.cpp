#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;
map<string , int> mp;
int main()
{
	int t;
	cin>>t;
	string str;
	map<string,int> :: iterator it;
	while(t--)
	{
		cin>>str;
		it = mp.find(str);
		if(it!=mp.end())it->second++;
		else mp.insert(make_pair(str,1));
	}
	for(it = mp.begin();it!=mp.end();it++)cout<<it->first<<" "<<it->second<<endl;
	mp.clear();
	return 0;
}
