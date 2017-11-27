#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int arr[1003];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		int sum=0;
		for(int i=n-1;i>=0;i=i-4)
		{
			sum = sum + arr[i];
			sum = sum + arr[i-1];
		}
		cout<<sum<<endl;
	}
	return 0;
}
