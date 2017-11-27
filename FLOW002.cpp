#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t,n,n2;
	cin>>t;
	while(t--)
	{
		cin>>n>>n2;
		n = n % n2;
		cout<<n<<endl;
	}
	return 0;
}
