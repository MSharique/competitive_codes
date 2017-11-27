#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num,n,d,q;
	long long int f,ans;
	cin>>num;
	n = d = 1 ;
	f = 1;
	q = num/n;
	while(q>0)
	{
		if(q<10)
		{
			ans = (num-n);
			ans = ans * d;
			f = f + ans;
			break;
		}
		else
		{
			int t = n * 10;
			ans = t-n;
			ans = ans * d;
			f = f + ans;
			n = t;
			f = f + 1;
			d++;
		}
		q = num/n;
	}
	cout<<f;
	return 0;
}
