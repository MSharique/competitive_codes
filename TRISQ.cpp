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
		cin>>n;
		n = n/2;
		n2 = n-1;
		if(n%2==0)n/=2;
		else n2 /= 2;
		n = n*n2;
		cout<<n<<endl;
	}
	return 0;
}
