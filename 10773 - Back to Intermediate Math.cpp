#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int n,cs=1;
	double d,v,u;
	cin>>n;
	while(n--)
	{
		cin>>d>>v>>u;
		cout<<"Case "<<cs++<<": ";
		if(v==0 || u==0 || v>=u ) cout<<"can't determine\n";
		else
		{
			double x = (d*1.0) / (u);
			u = u*u;
			v = v*v;
			double y = (d*1.0) / (sqrt(u - v ));
			x = fabs(x-y);
			cout<<fixed<<setprecision(3)<<x<<endl;
		}
	}
	return 0;
}
