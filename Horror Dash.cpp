#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[1000003];

int main()
{
	int t,n;
	cin>>t;
	for(int ca=1;ca<=t;ca++)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		n = *max_element(arr,arr+n);
		cout<<"Case "<<ca<<": "<<n<<endl;
	}
	return 0;
}
