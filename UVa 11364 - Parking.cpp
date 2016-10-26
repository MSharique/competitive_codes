#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,num,mn,mx;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mn = 100;
		mx = -1;
		while(n--)
		{
			cin>>num;
			mn = min(mn,num);
			mx = max(mx,num);
		}
		num = mx-mn;
		num = num * 2;
		cout<<num<<endl;
	}
	return 0;
}
