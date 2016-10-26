#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	double x,y,z,ans;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		y = (x+z-y)/2.0;
		x = x - y;
		z = z - y;
		ans = x*y;
		ans = ans + y*z;
		ans = ans + z*x;
		printf("%0.02lf\n",ans);
	}
	return 0;
}
