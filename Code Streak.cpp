#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<cstdlib>
#include<cstring>
using namespace std;

bool sub[1000003];

int main()
{
	int t,n,s,r,ans;
	cin>>t;
	while(t--)
	{
		ans = INT_MIN;
		cin>>n;
		int cnt = 0;
		for(int i=0;i<n;i++)
		{
			cin>>s>>r;
			if(r==0)
			{
				ans = max(ans , cnt);
				cnt = 0;
			}
			else if(!sub[s])
			{
				sub[s] = 1;
				cnt++;
				ans = max(ans,cnt);
			}
		}
		memset(sub,false,sizeof(sub));
		cout<<ans<<endl;
	}
	return 0;
}
