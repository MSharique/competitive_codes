#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100003];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	long long int a,b;
	a = arr[n-1];
	b = arr[n-2];
	a = a * b;
	cout<<a;
	return 0; 
}
