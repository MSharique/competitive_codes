#include<iostream>
#include<cstdio>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;

int n;
int arr[100003];
int dp[100003];
int ans[100003];

void update(int at,int by)
{
	while(at<100003)
	{
		ans[at] = max(ans[at] , by);
		at |=  at + 1;
	}
}

int query(int at)
{
	int res = 0;
	while(at > 0)
	{
		res = max(res , ans[at]) ; 
		at &=  at + 1 ; 
		at = at - 1;
	}
	return res;
}

int main()
{
	int mx = INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i];
	for(int i=1;i<=n;i++)
	{
		dp[i]  =  arr[i] + query(arr[i]);
		update(arr[i],dp[i]);	
		mx = max(mx,dp[i]);
	}
	//n  = *max_element(dp+1 , dp + n+1);
	cout<<mx;
	return 0;
}
