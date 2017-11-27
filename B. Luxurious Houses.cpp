#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100003];
int ans[100003];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	int lar = arr[n-1];
	ans[n-1] = 0;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i] > lar)
		{
			ans[i] = 0;
			lar = arr[i];
		}
		else
		{
			ans[i] = lar-arr[i] + 1;
		}
	}
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
	return 0;
}
