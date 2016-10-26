#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,arr[3],ca=1;
	cin>>t;
	for(;ca<=t;ca++)
	{
		for(int i=0;i<3;i++)cin>>arr[i];
		sort(arr,arr+3);
		cout<<"Case "<<ca<<": "<<arr[1]<<endl;
	}
	return 0;
}
