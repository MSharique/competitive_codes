#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,m,n;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch>>m>>n;
		if(ch=='r' || ch=='Q')cout<<min(m,n)<<endl;
		else if(ch=='k')
		{
			m = m*n;
			m++;
			m /= 2;
			cout<<m<<endl;
		}
		else
		{
			m = (++m)/2;
			n = (++n)/2;
			m = m*n;
			cout<<m<<endl;
		}
		
	}
	return 0;
}
