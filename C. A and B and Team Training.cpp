#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	int e,n,ans=0;
	cin>>e>>n;
	while(e>0 && n>0)
	{
		if(e==1 && n==1)break;
		if(e>=n)
		{
			e-=2 , n-- , ans++;
		}
		else n-=2 , e-- , ans++;
	}
	cout<<ans;
	return 0;
}
