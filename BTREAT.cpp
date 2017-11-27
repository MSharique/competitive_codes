#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

typedef long long int lli;
int arr[100003];

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		lli sum = 0,cnt=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		if(sum%n==0)
		{
			sum = sum/n;
			for(int i=0;i<n;i++)if(arr[i]>sum)cnt = cnt + (arr[i]-sum);
			cout<<cnt<<endl;
		}
		else cout<<"No Treat\n";
	}
	return 0;
}
