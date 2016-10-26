#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100003];

int main()
{
	int t,x,z;
	cin>>t;
	for(int i=0;i<t;i++)cin>>arr[i];
	long long int ene = 0 , ans = 0;
	x = 0;
	for(int i=0;i<t;i++)
	{
		ene = ene + x - arr[i];
		if(ene<0)
		{
			ans = ans + abs(ene);
			ene=0;
		}
		x = arr[i];
	}
	cout<<ans;
	return 0;
}
