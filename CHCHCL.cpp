#include<iostream>
using namespace std;

int main()
{
	
	int t,n,m;
	long long int ans,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ans = n;
		temp = m;
		ans = ans * temp;
		if(ans&1)cout<<"No\n";
		else cout<<"Yes\n";
	}
	return 0;
}
