#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[103];

int main()
{
	int n,c,ans= 0;
	cin>>n>>c;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		int temp = arr[i]-arr[i+1]-c;
		ans = max(ans,temp);
	}
	cout<<ans;
	return 0;
}
