#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 100001;
int arr[N];
vector<int> pr;
int lp[N];

void seive()
{
	for(int i=2;i<=N;i++)
	{
		if(lp[i]==0)
		{
			lp[i]=i;
			pr.push_back(i);
		}
		for(int j=0;j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N;j++)
				lp[i*pr[j]] = pr[j];
	}
}

int main()
{
	seive();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		int ans = arr[0];
		for(int i=1;i<n;i++)ans=__gcd(ans,arr[i]);
		if(ans==1)cout<<-1<<endl;
		else cout<<lp[ans]<<endl;
	}
	return 0;
}
