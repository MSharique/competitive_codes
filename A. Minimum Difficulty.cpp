#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

int arr[103];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	int cnt = 1;
	int temp1 = INT_MIN;
	int ans = INT_MAX;
	for(int i=1;i<n-1;i++)
	{
		temp1 = INT_MIN;
		for(int j=1;j<n;j++)
		{
			if(i!=j)
			{
				if(j-1 == i)temp1 = max(temp1, abs(arr[j]-arr[j-2]));
				else temp1 = max(temp1, abs(arr[j]-arr[j-1]));
			}
		}
		ans = min(ans,temp1);
	}
	cout<<ans;
	return 0;
}
