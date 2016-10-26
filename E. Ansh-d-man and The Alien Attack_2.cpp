#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int arr[100003];
int ans[100003];

int main()
{
	int  n,mx=INT_MIN;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i] , ans[i] = arr[i];
/*	cout<<"\n arr : ";
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<"\n ans : ";
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
*/	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j] <= arr[i])
			{
				ans[i] = max(ans[i] , ans[j] + arr[i]);
				mx = max(mx , ans[i]);
			}
		}
	}
	cout<<mx;
	return 0;
} 
