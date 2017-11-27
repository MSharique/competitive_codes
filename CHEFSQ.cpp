#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> vec;
int main()
{
	int t,n,x,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>temp , vec.push_back(temp);
		sort(vec.begin(),vec.end());
		cin>>x;
		bool flag = true;
		for(int i=0;i<x;i++)
		{
			cin>>temp;
			if(!binary_search(vec.begin(),vec.end(),temp))flag=false;
		}
		if(flag)cout<<"Yes\n";
		else cout<<"No\n";
		vec.clear();
	}
	return 0;
}
