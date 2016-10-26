#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<cstdlib>
#include<sstream>
using namespace std;

map<int,int> mp;

int main()
{
	bool flag=true;
	int t,k,val;
	string str,arr;
	cin>>t;
	while(t--)
	{
		if(!flag)cout<<endl;
		getline(cin,str);
		getline(cin,arr);
		stringstream str1(str) , str2(arr);
		while(str1 >> k)
		{
			str2 >> val;
			mp.insert(make_pair(k,val));
		}
		map<int,int> :: iterator it;
		for(it = mp.begin();it!=mp.end();it++)cout<<it->second<<endl;
		flag = false;
		mp.clear(); 
	}
	return 0;
}
