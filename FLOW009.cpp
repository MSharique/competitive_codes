#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	int t;
	double q,r;
	cin>>t;
	while(t--)
	{
		cin>>q>>r;
		r = q*r;
		if(q>1000)
		{
			r = r - (r/10.0);
		}
		printf("%0.06f\n",r);
	}
	return 0;
}
