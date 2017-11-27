#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int arr[10];
	int t,n,mn,mx;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mn = mx= 1;
		int x=0,zer=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]<0)x++;
			else if(arr[i]==0)zer++;	
		}
		sort(arr,arr+n);
		if(x==0 && zer==0)
		{
			for(int i=0;i<n;i++)mx = mx * arr[i];
			cout<<mx<<" "<<arr[0]<<endl;
		}
		else if(zer==n)cout<<"0 0\n";
		else if(x==n)
		{
			
		}
	}
	return 0;
}
