#include<iostream>
#include<cstdio>
#include<cctype>
#include<algorithm>
using namespace std;

int arr[50001];
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		long long int x = (arr[0]);
		x = x*(n-1);
		cout<<x<<endl;
	}
	return 0;
}
