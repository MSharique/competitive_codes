#include<bits/stdc++.h>
using namespace std;

int arr[1000003];

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		int len = 1 << n;
		for(int  i=0;i<len;i++)
		{
			int pos = n-1;
			int bits = i;
			cout<<"{ ";
			while(bits >0)
			{
				if((bits & 1)  == 1)cout<<arr[pos]<<" , ";
				bits = bits>>1;
				pos--;
			}
			cout<<"} \n";
		}
		
	}
	return 0;
}
