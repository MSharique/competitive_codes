#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

long long int arr[10];

int main()
{
	long long int t,n,m,sum;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		sum=0;
		int j=n-1;
		int cnt=0;
		while(sum<m && j>=0)
		{
			sum = sum + arr[j];
			j--;
			cnt++;
		}
		if(sum<m)cout<<-1<<endl;
		else cout<<cnt<<endl;
	}
	return 0;
}
