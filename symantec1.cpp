#include<iostream>
using namespace std;

int main()
{
	int t,n,m,k;
	long long int z,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>m;
		z = n;
		x = n+1;
		if(z%2==1)x/=2;
		else z/=2;
		z = z * x;
		z = z*z;
		x = k;
		z = z * k;
		x = m;
		//cout<<"\n cost = "<<z<<endl;
		if(x>=z)cout<<0<<endl;
		else 
		{
			z = z - x;
			cout<<z<<endl;
		}
	}
	return 0;
}
