#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<climits>
using namespace std;

int N = 31;	//total number of nodes

vector< vector<pair<int,int > > > vec(N);

vector<int > d(N,0) , cnt(N,0);

int fun(int a,int b,int r)
{
     	d[a] = 0;
		set<pair<int,int> > q;
		q.insert(make_pair(d[a],a));
		while(!q.empty())
		{
			int v = q.begin()->second;
			q.erase(q.begin());
				
			for(int j=0;j<vec[v].size();j++)
			{
				int to = vec[v][j].first , len = vec[v][j].second ;
				if(d[v] + len < r)
				{
					q.erase(make_pair(d[to],to));
					d[to] = d[v]+len;
					cnt[to]++;
					q.insert(make_pair(d[to],to));
				}
			}
		}
		a = cnt[b];
		for(int i=0;i<N;i++)d[i] = cnt[i] = 0;
	
}

int main()
{
	
	int t,n,m,l,r,a,b,q1;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			vec[a].push_back(make_pair(b,1));
		}
		cin>>l>>r;
		cin>>a>>b;
		q1 = fun(a,b,r);
		a = fun(a,b,l-1);
		a = q1-a;
		cout<<a<<endl; 	
	}
	return 0;
}


