#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<vector>
#include<utility>
using namespace std;

vector<pair<int ,int > > vec;

int main()
{
	int n,x,a,b;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}
	a = 1;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		b = vec[i].first - a;
		b = b / x;
		a = a + b*x;
		b = vec[i].second - a + 1;
		ans = ans + b;
		a = vec[i].second + 1;
	}	
	cout<<ans;
	return 0;
}
