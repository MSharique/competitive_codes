#include<iostream>
#include<algorithm>
using namespace std;

int att[11];
int def[11];

int main()
{
	int a,d;
	while(cin>>a>>d)
	{
		if(a==d && a==0)break;
		for(int i=0;i<a;i++)cin>>att[i];
		for(int i=0;i<d;i++)cin>>def[i];
		sort(def,def+d);
		int i=0;
		for(;i<a;i++)
		{
			if(att[i] < def[1])break;
		}
		if(i==a)cout<<"N\n";
		else cout<<"Y\n";
	}
	return 0;
}
