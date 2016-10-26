#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	double t,n,sv,csv,sv1,cv,r,cr,r1,ce,ca;
	cin>>t;
	if(t < 1 || t > 100)cout<<"Invalid Input\n";
	else {
	
	while(t--)
	{
		cin>>n>>sv>>csv>>r>>cr;
		sv1 = sv-csv;
		cv = n * min(sv,sv1);
		r1 = r - cr;
		ce = cv / 2.0;
		ca = ce * min(r1,r) * 0.01;
		if(sv < 0 || sv1 <	0)cout<<"Invalid Input\n";
		else if(n < 20000 || n > 10000000)cout<<"Invalid Input\n";
		else if(sv < 20.00 || sv > 10000.00)cout<<"Invalid Input\n";
		else if(csv < -2000.00 || csv > 2000.00)cout<<"Invalid Input\n";
		else if(r < 0.01 || r > 99.99)cout<<"Invalid Input\n";
		else if(cr < -10.00 || cr > 10.00)cout<<"Invalid Input\n";
		else if(csv > 0 && cr  == 0)cout<<"Invalid Input\n";
		else if(csv < 0 && cr  >0)cout<<"Invalid Input\n";
		else if(sv1 < 20.00 || sv1 > 10000.00)cout<<"Invalid Input\n";
		else if(r1 < 0.01 || r1 > 99.99)cout<<"Invalid Input\n";
		else
		{
			printf("%0.02f\n",sv1);
			printf("%0.02f\n",r1);
			printf("%0.02f\n",cv);
			printf("%0.02f\n",ce);
			printf("%0.02f\n",ca);
		}
	
}
	}
	return 0;
}
