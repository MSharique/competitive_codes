#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<set>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
const int INF = 1000000003;

vector<vector<pair<int,int> > > vec(100001);

int main()
{
	int t,n,m,s,e,v,u,cost;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&n,&m,&s,&e);
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d",&u,&v,&cost);
			//cout<<"\n cost = "<<cost<<endl;
			vec[u].push_back(make_pair(v,cost));
			vec[v].push_back(make_pair(u,cost));
		}
		vector<int> d(100001,INF) , p(100001,INF);
		d[s] = 0;
		priority_queue<pair<int,int> > q;
		q.push(make_pair(0,s));
		while(!q.empty())
		{
			v = q.top().second;
			cost = -q.top().first;
			q.pop();
			if(cost > d[v])continue;
			for(size_t j=0;j<vec[v].size();j++)
			{
				int to = vec[v][j].first;
				int len = vec[v][j].second;
				
				if(d[v]+len < d[to])
				{
					d[to] = d[v] + len;
					p[to] = v;
					q.push(make_pair(-d[to],to));
				}
			}
		}
	if(d[e]==INF)printf("NONE\n");	
	else printf("%d\n",d[e]);
//	d.clear();
//	p.clear();
//	vec.clear();
	}
	return 0;
}

