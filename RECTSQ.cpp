#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, a, b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int temp = __gcd(a,b);
		a = a * b;
		a /= temp;
		a /= temp;
		cout<<a<<endl;
	}
	return 0;
}