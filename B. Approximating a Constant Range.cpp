#include<bits/stdc++.h>
using namespace std;
int arr[1000003];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	int mn , mx , len = INT_MIN , it = 1;
	int l = 0 , r = 0;
	mn = mx = arr[l];
	int cnt = 0;
	while(r<n)
	{
		cout<<"l = "<<l<<" , r = "<<r<<endl;
		if(mn > arr[r])
		{
			mn = arr[++l];
			//l++;
		}
		if(mx < arr[r])
		{
			mx = arr[r];
			//r++;
		}
		if(abs(mx-mn) <= 1)
		{
			if(r-l+1 > len)len = r-l+1;
		}
		if(abs(mx-mn) > 1)
		{
			mn = arr[++l];
		}
		r++;
		
	}
	cout<<len<<endl;
	return 0; 
}
