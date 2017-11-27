#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100001];

int main()
{
	int t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>temp , arr[temp]++;
		for(int i=0;i<100001;i++)
		{
			if(arr[i]%2==1){
			cout<<i<<endl;
			}
			arr[i]=0;
		}
	}
	return 0;
}
