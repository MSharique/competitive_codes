#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int arr[1003];

int main()
{
	int n,l;
	double x,z;
	cin>>n>>l;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	x = arr[0];
	z = l-arr[n-1];
	x = max(x,z);
	int z1 = 0;
	for(int i=1;i<n;i++)z1 = max(z1,arr[i]-arr[i-1]);
	z = z1/2.0;
	x = max(x,z);
	printf("%0.09f",x);
	return 0;
}
