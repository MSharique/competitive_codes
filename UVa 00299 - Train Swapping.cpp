#include<bits/stdc++.h>
using namespace std;

int arr[53];

int main()
{
	int t,n,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		
		cnt = 0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-1-i;j++)
			{
				if(arr[j] > arr[j+1])
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
					cnt++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
	}
	return 0;
}
