#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#include<utility>
using namespace std;

map <string ,int> mp;
map <string,int > :: iterator it;

int main()
{
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		it = mp.find(str);
		if(it!=mp.end())
		{
			it->second = it->second + 1;
			cout<<it->first<<it->second<<endl;
		}
		else
		{
			mp.insert(make_pair(str,0));
			cout<<"OK\n";
		}
	}
	mp.clear();
	return 0;
}
