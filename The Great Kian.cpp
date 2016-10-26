#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int arr[100003];

int main()
{
	int n;
	long long int a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	a = b = c = 0;
	for(int i=0;i<n;i+=3)a += arr[i];
	for(int i=1;i<n;i+=3)b += arr[i];
	for(int i=2;i<n;i+=3)c += arr[i];
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}

