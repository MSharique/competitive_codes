#include <bits/stdc++.h>
using namespace std;
int arr[100005];

int main(int argc, char const *argv[])
{
	/* code */
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n&1)
		{
			//odd
			int lim = n - 3;
			int st = 1;
			for(;st<lim;st+=2)
			{
				cout << st+1 << " " << st << " ";
			}
			cout<< st+1 << " " << n << " " << st << endl; 
		}
		else
		{
			for(int i=1;i<n;i+=2)
			{
				cout<<i+1 << " " << i << " "; 
			}
			cout<<endl;
		}
	}
	return 0;
}