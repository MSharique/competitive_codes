#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
map<string,int> a;
map<string,int>::iterator it;
vector<vector<int> >adj;
int main()
{
	string temp,node;
	int i,n,u,m,v,size,t,j,counter,ele,idx;
	float var,ans;
	scanf("%d %d",&n,&m);
	adj.resize(n+1);
	int val[n+1],cnt[n+1],arr[n+1];
	memset(cnt,0,sizeof(cnt));
	memset(arr,0,sizeof(arr));
	for(i=1;i<=n;i++)
	{
		cin>>temp;
		a[temp]=i;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&val[i]);
	}
	for(i=0;i<n-m;i++)
	{
		cin>>temp;scanf("%d",&t);
		u=a[temp];
		for(j=0;j<t;j++)
		{
			cin>>node;
			v=a[node];
			adj[u].push_back(v);
		}
	}
	queue<pair<int,int> > q;
	q.push(mp(1,1));
	while(!q.empty())	
	{
		ele=q.front().first;counter=q.front().second;
		q.pop();
		arr[counter]+=val[ele];
		cnt[counter]++;
		size=adj[ele].size();
		for(i=0;i<size;i++)
		{
			q.push(mp(adj[ele][i],counter+1));
		}
	}
	ans=(float)arr[1]/(float)cnt[1];
	idx=1;
	for(i=1;i<=n;i++)
	{
		if(cnt[i])
		{
			var=(float)arr[i]/(float)cnt[i];
			if(ans<var)
			{
				ans=var;idx=i;
			}
		}
	}
	printf("%.5f %d",ans,idx);
}
