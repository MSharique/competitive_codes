#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main(int argc, char const *argv[])
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int loc = min_element(arr, arr+n) - arr + 1;
		cout<<loc<<endl;
	}
	return 0;
}