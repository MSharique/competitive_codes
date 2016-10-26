#include<bits/stdc++.h>
using namespace std;

int arr[100003];
int ans[100003];

int main()
{
	int n,m=1;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	ans[0]=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]>=arr[i-1])ans[i] = ans[i-1]+1;
		else ans[i] = 1;
		m = max(m,ans[i]);
	}
	cout<<m;
	return 0;
}
