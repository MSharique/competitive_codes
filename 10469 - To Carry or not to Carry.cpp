#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		n = m^n;
		cout<<n<<endl;
	}
	return 0;
}
