#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int arr[100003];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	int cnt=0;
	for(int i=1;i<n;i++)if(arr[i]-arr[i-1] <= k )cnt++ ,i++;
	cout<<cnt<<endl;
	return 0;
}
