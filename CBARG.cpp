#include<iostream>
using namespace std;

int arr[100003];

int main()
{
	int t,n;
	long long int ans = 0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		ans = arr[0];
		for(int i=1;i<n;i++)
		{
			if(arr[i]>arr[i-1])ans = ans + arr[i] - arr[i-1];
		}
		cout<<ans<<endl;
	}
	return 0;
}
