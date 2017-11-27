#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n = n * 8;
		n = n + 1;
		n = floor(sqrt(n));
		n = n- 1;
		n = floor((n)/2.0);
		cout<<n<<endl;
	}
	return 0;
}
