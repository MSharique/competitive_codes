#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int arr[2001];
vector<pair<int,int > > vec;

bool mufunc(pair<int,int > a , pair<int,int > b)
{
	if(a.first > b.first)return true;
	if(b.first == a.first)
	{
		if(a.first < b.first)return true;
		else return false;
	}
	return false;
}

int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		vec.push_back(make_pair(x,i+1));	
	}
	sort(vec.begin(),vec.end(),mufunc);
/*	cout<<"\n sorted : "<<endl;
	for(int i=0;i<vec.size();i++)
	{
		cout<<"at i = "<<i+1<<" , first = "<<vec[i].first<<" , sec = " << vec[i].second<<endl;
	}
*/	arr[vec[0].second] = 1;
	for(int i=1;i<n;i++)
	{
		if(vec[i].first==vec[i-1].first)arr[vec[i].second] = arr[vec[i-1].second];
		else arr[vec[i].second] = i+1;
	}
	for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
	vec.clear();
	return 0;
}
