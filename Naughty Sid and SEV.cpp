#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.14159265

int main()
{
	int t,a,h,theta;
	cin>>t;
	while(t--)
	{
		cin>>a>>h>>theta;
		double th = tan(theta*PI / 180.0) , ratio = h/(a * 1.0),ans;
		//cout<<"tan(theta) : "<<th<<endl;
		if(th <= ratio)
		{
			th = th * a;
			th = th / 2.0;
			ans = h-th;	
		}
		else
		{
			th = th * a;
			th = th * 2.0;
			h = h*h;
			ans = h / th;
		}
		//cout<<"\n h = "<<ans<<endl;
		ans = ceil(ans);
		cout<<ans<<endl;
	}
	return 0;
}
