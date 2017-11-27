#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int t,n,k,x,y;
	bool avail = false;
	cin>>t;
	while(t--)
	{
		avail = false;
		cin>>n>>k;
		k = k*k;
		while(n--)
		{
			cin>>x>>y;
			x = x*x;
			y = y*y;
			x = x + y;
			x = x - k;
			if(x<=0)avail = true;
		}
		if(avail)cout<<"Available\n";
		else cout<<"Not Available\n";
	}
	return 0;
}
