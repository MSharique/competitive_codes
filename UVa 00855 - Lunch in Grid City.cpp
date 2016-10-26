#include<bits/stdc++.h>
using namespace std;

vector<int> street;
vector<int> avenue;

int main()
{
	int t,r,c,fr,x,y;
	cin>>t;
	while(t--)
	{
		cin>>r>>c>>fr;
		for(int i=0;i<fr;i++)
		{
			cin>>x>>y;
			street.push_back(x);
			avenue.push_back(y);
		}
		sort(street.begin() , street.end());
		sort(avenue.begin() , avenue.end());
		if(fr&1)
		{
			x = fr/2;
			cout<<"(Street: "<<street[x]<<", Avenue: "<<avenue[x]<<")\n";
		}
		else
		{
			x = fr/2;
			x = x-1;
			cout<<"(Street: "<<street[x]<<", Avenue: "<<avenue[x]<<")\n";
		}
		street.clear();
		avenue.clear();
	}
	return 0;	
}
