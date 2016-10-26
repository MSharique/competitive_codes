#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define ll long long
#define MOD 1000000007
int A[MAXN],lp[MAXN];
vector<int> P[MAXN];
int p[MAXN];
int cnt[22];

ll power(ll a,ll b,ll m)
{
	ll res = 1;
	while(b)
	{
		if(b&1)
		{
			res *= a;
			res %= m;
		}
		a *= a;
		b /= 2;
		a %= m;
	}
	return res;
}

int main()
{
	for(int i=2;i<MAXN;++i)
		if(lp[i]==0)
			for(int j=i;j<MAXN;j+=i)
				if(lp[j]==0)
					lp[j] = i;
	int tp = 0;
	for(int i=2;i<MAXN;++i)
		if(lp[i]==i)
			p[tp++] = i;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll res = 1;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;++i)
			scanf("%d",A+i);
		for(int i=0;i<n;++i)
		{
			int prev = 0, cnt = 0;
			while(A[i]!=1)
			{
				if(lp[A[i]]==prev)
					++cnt;
				else
				{
					P[prev].push_back(cnt);
					cnt = 1;
					prev = lp[A[i]];
				}
				A[i] /= lp[A[i]];
			}
			if(cnt>0)
				P[prev].push_back(cnt);
		}
		for(int i=0;i<tp;++i)
		{
			int cur = p[i];
			if(P[cur].size()>0)
			{
				for(int j=0;j<P[cur].size();++j)
					++cnt[P[cur][j]];
				P[cur].clear();
				for(int j=0;j<22;++j)
					while(cnt[j])
					{
						P[cur].push_back(j);
						cnt[j]--;
					}
				int sz = P[cur].size()-1;
				ll curp = 0;
				for(int j=0;j<P[cur].size();++j)
				{
					curp += P[cur][j]*power(2,sz,MOD-1);
					curp %= (MOD-1);
					--sz;
				}
				res *= power(cur,curp,MOD);
				res %= MOD;
			}	
		}
		printf("%lld\n",res);
		for(int i=0;i<tp;++i)
			P[p[i]].clear();
		P[0].clear();
	}
	return 0;
}
