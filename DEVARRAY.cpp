#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int arr[100003];

int main()
{
	int n,q;
	cin>>n>>q;
	int mn,mx;
	mn = INT_MAX;
	mx = INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mn = min(mn , arr[i]);
		mx = max(mx , arr[i]);
	}
	while(q--)
	{
		cin>>n;
		if(n>=mn && n<=mx)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}