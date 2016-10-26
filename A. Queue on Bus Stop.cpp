#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[102];

int main()
{
	int n,m,temp;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i];
	int i=0 , cnt=0 ;
	temp = 0;
	while(i<n)
	{
		while(temp<=m && i<n)
		{
			temp = temp + arr[i];
			i++;
		}
		cnt++;
		if(temp>m)temp = 0 , i--;
		
	}
	cout<<cnt;
	return 0;
}
