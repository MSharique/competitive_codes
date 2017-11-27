#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int n,m;
	while(cin>>n>>m)
	{
		n = abs(m-n);
		cout<<n<<endl;
	}
	return 0;
}
