#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;

map<char,int> mp;
map<char,int>::iterator it;

int main()
{
	int t,lenA,lenB;
	string A,B;
	cin>>t;
	while(t--)
	{
		cin>>A>>B;
		lenA = A.length();
		for(int i=0;i<lenA;i++)
		{
			it = mp.find(A[i]);
			if(it == mp.end())
			{
				mp.insert(make_pair(A[i],1));
			}
		}
		lenB = B.length();
		for(int i=0;i<lenB;i++)
		{
			it = mp.find(B[i]);
			if(it != mp.end())
			{
				it->second++;
			}
		}
		//lenA = mp.length();
		bool flag = true;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(it->second > 1)
			{
				flag = false;
				break;
			}
		}
		if(flag)cout<<"No\n";
		else cout<<"Yes\n";
		mp.clear();
	}
	return 0;
	
}
