#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		n = n/3;
		m = m/3;
		n = n * m;
		cout<<n<<endl;
	}
	return 0;	
}
