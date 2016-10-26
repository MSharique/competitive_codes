#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#include<utility>
#include<vector>
using namespace std;

vector<pair<int,int> > vec(250001);

int main()
{
	int t,n;
	long long int temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>temp;
				vec[temp].first = i;
				vec[temp].second = j;
			}
		}
		temp = 0;
		for(int i=2;i<=n*n;i++)
		{
			temp = temp + abs(vec[i].first - vec[i-1].first) + abs(vec[i].second - vec[i-1].second) ;
		}
		cout<<temp<<endl;
		vec.clear();
	}
	return 0;
}
