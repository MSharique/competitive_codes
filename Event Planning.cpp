#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int n,b,h,w,cost,temp,mx,hcost,avail;
	while(cin>>n>>b>>h>>w)
	{
		cost = INT_MAX;
		for(int j=0;j<h;j++){
			cin>>hcost;
			mx = 0;
			for(int i=0;i<w;i++)cin>>avail , mx = max(mx,avail);
			if(mx>=n)temp = hcost * n;
			else temp = INT_MAX;
			cost = min(temp,cost);
		}
		if(cost>b)cout<<"stay home\n";
		else cout<<cost<<endl;
	}
	return 0;
}
