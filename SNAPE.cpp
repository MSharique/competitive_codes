#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		double mx = hypot(a,b);
		double mn = b*b;
		b = a*a;
		mn = sqrt(mn-b);
		printf("%.6lf %0.6lf\n",mn,mx);
	}
	return 0;
}
