#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,m;
	while(cin>>n>>m)
	{
		n = n*m;
		n = n * 2;
		cout<<n<<endl;
	}
	return 0;
}
