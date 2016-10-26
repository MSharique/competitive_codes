#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	long long int n,q,temp;
	cin>>n>>q;
	while(q--)
	{
		cin>>temp;
		if(temp <= n+1)cout<<0<<endl;
		else
		{
			long long int x = 2 * n;
			if( temp > x){
				x = temp - x;
				x = n - x + 1;
			}
			else
			{
				x = temp-n;
				x = x - 1;
			}
			cout<<x<<endl;
		}
	}
	return 0;
}
