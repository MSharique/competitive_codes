#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int t,n,c,q,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>q;
		while(q--)
		{
			cin>>a>>b;
			if(c<a){}
			else if(c>b){}
			else c = b-(c-a);
		}
		cout<<c<<endl;
	}
	return 0;
}
