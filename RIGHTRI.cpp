#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int t,cnt=0;
	cin>>t;
	double x1,x2,x3,y1,y2,y3,a,b,c;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
		b = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
		c = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
		//cout<<"\n a : "<<a<<" , b : "<<b<<" , c : "<<c<<endl;
		if((a==(b+c)) || (b==(a+c)) || (c==(a+b)) )cnt++;
	}
	cout<<cnt;
	return 0;
}
