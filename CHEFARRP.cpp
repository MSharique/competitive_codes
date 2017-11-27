#include <bits/stdc++.h>
using namespace std;
int arr[100];

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--) 
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		int cnt = n;
		for(int i=0;i<n;i++) 
		{
			int prod = arr[i];
			int sum = arr[i];
			for(int j=i+1;j<n;j++)
			{
				prod = prod * arr[j];
				sum = sum + arr[j];
				if(prod == sum)
					cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}