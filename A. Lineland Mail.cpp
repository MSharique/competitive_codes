#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

long long int arr[100003];

int main()
{
	
	int n,l,r;
	long long int t1,t2,mn=INT_MAX , mx=INT_MIN;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	l = 0;
	r = n-1;
	t1 = abs(arr[1]-arr[0]);
	t2 = abs(arr[n-1]-arr[0]);
	cout<<t1<<" "<<t2<<endl;
	for(int i=1;i<n-1;i++)
	{
		t1 = abs(arr[l]-arr[i]);
		t2 = abs(arr[r]-arr[i]);
		mx = max(t1,t2);
		t1 = abs(arr[i]-arr[i-1]);
		t2 = abs(arr[i]-arr[i+1]);
		mn = min(t1,t2);
		cout<<mn<<" "<<mx<<endl;
	}
	t1 = abs(arr[n-1]-arr[n-2]);
	t2 = abs(arr[n-1]-arr[0]);
	cout<<t1<<" "<<t2<<endl;
	return 0;
}
