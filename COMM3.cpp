#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double arr[6],r;
	cin>>t;
	while(t--)
	{
		cin>>r;
		for(int i=0;i<6;i++)cin>>arr[i];
		double a = hypot(abs(arr[0]-arr[2]),abs(arr[1]-arr[3]));
		double b = hypot(abs(arr[4]-arr[2]),abs(arr[5]-arr[3]));
		double c = hypot(abs(arr[0]-arr[4]),abs(arr[1]-arr[5]));
	//	cout<<"\n r  = "<<r <<" , a = "<<a<<" , b = "<<b<<" . c = "<<c<<endl;
		if(a <= r)
		{
			if(b <= r)cout<<"yes\n";
			else if(c < r)cout<<"yes\n";
			else cout<<"no\n";
		}
		else if(b <= r)
		{
			if(c <= r)cout<<"yes\n";
			else cout<<"no\n";
		}
		else cout<<"no\n";
	}
	return 0;
}
