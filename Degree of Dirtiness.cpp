#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int q = x/n;
		if(x%n == 0)q--;
		int st = n*q + 1;
		int mid = (q+1)*n;
		if(x%2==0 && st%2==1)st++;
		int ind = (x-st)/2;
		ind++;
		if(x%2==0)ind = n-ind + 1;
		cout<<ind<<" "<<q<<endl;
	}
	return 0;
}
