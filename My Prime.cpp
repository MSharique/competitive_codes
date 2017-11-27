#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[101];
bool prime[101];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i],prime[i]=1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)continue;
			if(arr[j]%arr[i]==0)prime[j]=0;
		}
	}
	for(int i=0;i<n;i++)if(prime[i])cout<<arr[i]<<" ";
	return 0;	
}
