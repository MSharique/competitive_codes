#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

vector<pair<int,int> > vec;
int main()
{
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	sort(vec.begin(),vec.end());
	bool flag = true;
	x = vec[0].second;
	for(int i=1;i<t;i++)
	{
		if(vec[i].second < x)
		{
			flag = false;
			break;
		}
		x = vec[i].second;
	}
	if(!flag)cout<<"Happy Alex";
	else cout<<"Poor Alex";
	return 0;
}
