#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	long long int n,m; 
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(n&1)
		{
			if(m&1)cout<<"No\n";
			else
			{
				if(n==1 && m==2)cout<<"Yes\n";
				else if(n==1 && m!=2)cout<<"No\n";
				else cout<<"Yes\n";
			}
		}
		else
		{
			if(m==1 && n!=2)cout<<"No\n";
			//else if(m==1 && n==2)cout<<"Yes\n";
			else cout<<"Yes\n";
		}
	}
	return 0;
}
