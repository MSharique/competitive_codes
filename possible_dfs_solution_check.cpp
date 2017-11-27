#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define MOD 1000000007

lli fact[100010];
lli dfs(int u,int parent,vector<vector<int> > &v)
{
	int cnt = 0;
	lli res = 1;
	for(int i=0;i<v[u].size();i++)
	{
		if(v[u][i]!=parent)
		{
			cnt++;
			res*=dfs(v[u][i],u,v);
			res%=MOD;
		}
	}
	return (res*fact[cnt])%MOD;
}

int main()
{
	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	int i,N;
	fact[0]=1;
	for(i=1;i<100010;i++)
		fact[i]=(fact[i-1]*i)%MOD;
	//cin>>N;
	f2>>N;
	vector<vector<int> > v(N);
	for(i=1;i<N;i++)
	{
		int x,y;
		//cin>>x>>y;
		f2>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
//	cout<<dfs(0,-1,v);
	f1<<dfs(0,-1,v);
	f1.close();
	f2.close();
}
