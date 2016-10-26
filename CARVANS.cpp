#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[10003];

int main()
{
	int t,n,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		cnt = 1;
		for(int i=1;i<n;i++)
		{
			if(arr[i]>arr[i-1])arr[i]=arr[i-1];
			else cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
