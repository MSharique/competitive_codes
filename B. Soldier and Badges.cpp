#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int arr[3002];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	int cnt = 0;
//	cout<<"\n sorted \n";
//	for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<=arr[i-1])cnt = cnt + arr[i-1]-arr[i]+1 , arr[i]=arr[i-1]+1;
	}
//	cout<<"\n final \n";
//	for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
	cout<<cnt;
	return 0;
}
