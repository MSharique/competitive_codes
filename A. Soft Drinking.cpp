#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int main()
{
	int n,k,l,c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	k = k*l;
	k = k/nl;
	c = c*d;
	p = p / np;
	k = min(k,min(c,p));
	k = k / n;
	cout<<k;
	return 0;
}
