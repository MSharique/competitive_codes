#include<bits/stdc++.h>
using namespace std;
int arr[12];

int main()
{
	long long int a,b,temp;
	int n,base;
	cin>>n>>base;
	for(int i=0;i<n;i++)cin>>arr[i];
	a = arr[n-1];
	int p=1;
	for(int i=n-2;i>=0;i--)
	{
		temp = pow(base,p++);
		temp = temp * arr[i];
		a = a + temp;
	}
	cin>>n>>base;
	for(int i=0;i<n;i++)cin>>arr[i];
	b = arr[n-1];
	 p=1;
	for(int i=n-2;i>=0;i--)
	{
		temp = pow(base,p++);
		temp = temp * arr[i];
		b = b + temp;
	}
	//cout<<a<<" , "<<b<<endl;
	if(a==b)cout<<"=";
	if(a<b)cout<<"<";
	if(a>b)cout<<">";
	return 0; 
}
