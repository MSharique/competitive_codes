#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

vector<pair<int , pair<int,int> > >vec;

int l[105] , r[105];

bool myfunc(pair<int , pair<int,int> > a, pair<int , pair<int,int> > b)
{
	int temp = a.second.first * a.second.second;
	int temp1 = b.second.first * b.second.second;
	if(temp > temp1)return true;
	else if(temp == temp1)
	{
		if(a.second.second > b.second.second)return true;
		else if(a.second.second == b.second.second)
		{
			if(a.first < b.first)return true;
		}
	}
	return false; 
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>l[i];		
		for(int i=0;i<n;i++)cin>>r[i];
		for(int i=0;i<n;i++)
		{
			vec.push_back(make_pair(i+1 , make_pair(l[i] , r[i])));
		}		
		sort(vec.begin() , vec.end() , myfunc);
	/*	cout<<"\n sorted : \n";
		for(int i=0;i<n;i++)
		{
			cout<<vec[i].first<<" , ( "<<vec[i].second.first<<" , "<<vec[i].second.second<<" )\n";
		}		
	*/	cout<<vec[0].first<<endl;
		vec.clear();
	}
}
