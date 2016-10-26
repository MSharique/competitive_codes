#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[101][101];

int main()
{
	int n,a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d;
		for(int i=a;i<=c;i++)
		{
			for(int j=b;j<=d;j++)
			arr[i][j]++;
		}
	}
	a = 0;
	for(int i=0;i<101;i++)
	{
		for(int j=0;j<101;j++)a += arr[i][j];
	}
	cout<<a;
	return 0;
}
