#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int x,n,m;
	cin>>n>>m;
	long long int a,b,c,d;
	a = m-1;
	a = n-a;
	b = a-1;
	if(a%2==0)
	{
		a = a/2;
		a = a*b; 
	}
	else
	{
		b = b/2;
		a = a*b;
	}
	//cout<<"\n max  = "<<a<<endl;
	b = n/m;
	x = n%m;
		c = b-1;
		if(b%2==0)
		{
			b = b/2;
			b = b*c;
			b = (m-x)*b;
		}
		else
		{
			c = c/2;
			b = b*c;
			b = (m-x)*b;
		}
	d = n/m+1;
	x = n%m;
		c = d-1;
		if(d%2==0)
		{
			d = d/2;
			d = d*c;
			d = x*d;
		}
		else
		{
			c = c/2;
			d = d*c;
			d = x*d;
		}
		b = b+d;
	//cout<<"\n min probably : "<<b<<endl;
	cout<<b<<" "<<a;
	return 0 ;
}
