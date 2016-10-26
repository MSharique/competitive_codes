#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t,a,b,c,sum,cnt;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		cnt=0;
		if(a==0 ||b==0 || c==0)cnt++;
		sum = a+b+c;
		if(sum==180 && cnt==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
