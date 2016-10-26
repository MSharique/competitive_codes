#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define MAXN 100010
 
ll ft[MAXN];
 
void update(int i,ll val)
{
	for(;i<MAXN;i+=(i&-i))
		ft[i] = max(ft[i],val);
}
 
ll query(int i)
{
	ll res = 0;
	for(;i;i-=(i&-i))
		res = max(res,ft[i]);
	return res;
}
 
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> A(n);
	for(int i=0;i<n;++i)
		scanf("%d",&A[i]);
	vector<ll> DP(n);
	for(int i=0;i<n;++i)
	{
		DP[i] = A[i] + query(A[i]);
		update(A[i],DP[i]);
	}
	printf("%lld",*max_element(DP.begin(),DP.end()));
	return 0;
} 
