#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		temp = n;
		int rev = 0;
		while(n)
		{
			int r = n%10;
			rev = (rev*10)+r;
			n = n/10;
		}
		cout<<rev<<endl;
	}
	return 0;
}
