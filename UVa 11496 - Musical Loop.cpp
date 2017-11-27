#include<bits/stdc++.h>
using namespace std;

int arr[10005];

int main()
{
	int n,mn,mx,peak;
	while(cin>>n)
	{
		if(n==0)break;
		for(int i=0;i<n;i++)cin>>arr[i];
		mn = 0;
		mx = 0;
		peak = 0;
		arr[n] = arr[0];
		arr[n+1] = arr[1];
		if(arr[0] < arr[1])mx=1;
		else mn = 1;
		peak = 1;
		for(int i=2;i<=n;i++)
		{
			if(mx==1 && arr[i-1]>arr[i])
			{
				peak++;
				mx = 0;
				mn = 1;
			} 
			else if(mn==1 && arr[i-1] < arr[i])
			{
				peak++;
				mx = 1;
				mn = 0;
			}
		}
		
		if(mx==1 && arr[n] < arr[n+1])peak--;
		else if(mn==1 && arr[n] > arr[n+1])peak--;
		cout<<peak<<endl;
	}
	return 0;
}
