#include<iostream>
#include<cstdio>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	double t,ds,dt,d;
	cin>>t;
	while(t--)
	{
		cin>>ds>>dt>>d;
		if(ds >= d + dt)cout<<fixed<<setprecision(6)<<ds-(d+dt)<<endl;
		else if(dt >= d + ds)cout<<fixed<<setprecision(6)<<dt-(d+ds)<<endl;
		else if(ds+dt <= d)cout<<fixed<<setprecision(6)<<d-(ds+dt)<<endl;
		else d=0,cout<<fixed<<setprecision(6)<<d<<endl;
	}
	return 0;
}
