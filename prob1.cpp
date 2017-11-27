#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>
#include<cmath>
using namespace std;

vector<pair < int , pair<double,double> > > vec;
vector< vector<pair<int,double> > > ans(100003);

bool myfunc(pair<int , pair<double,double> > a, pair<int , pair<double,double> > b)
{
	if(a.second.first < b.second.first)return true;
	else
	{
		if(a.second.second <= b.second.second)return true;
	}
	return false;
}

bool myfunc2(pair<int,double> a,pair<int,double> b)
{
	if(a.second < b.second)return true;
	else return false;
}
int main()
{
	double n,a,b;
	cout<<"\n enter number of points : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"\n coordinate no : "<<i+1<<endl;
		cout<<"\n x-coordinte : ";
		cin>>a;
		cout<<"  y-cordinate : ";
		cin>>b;
		vec.push_back(make_pair(i+1 , make_pair(a,b)));
	}
	sort(vec.begin(),vec.end() , myfunc);
	cout<<"\n sorted points : \n";
	for(int i=0;i<n;i++)
	{
		cout<<vec[i].first<<" : ("<<vec[i].second.first<<" , "<<vec[i].second.second<<" )\n";
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			double temp = hypot( (vec[i].second.first - vec[j].second.first) ,  (vec[i].second.second - vec[j].second.second));
			ans[vec[i].first].push_back(make_pair(vec[j].first , temp));
			ans[vec[j].first].push_back(make_pair(vec[i].first , temp));
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		sort(ans[i].begin() , ans[i].end() , myfunc2);
		cout<<"\n "<<i<<" : ";
		for(int j=0;j<3;j++)cout<<ans[i][j].first<<",";
	}
	vec.clear();
	ans.clear();
	return 0;
}
