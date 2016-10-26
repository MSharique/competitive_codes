#include<bits/stdc++.h>
using namespace std;

int arr[100003];
int main()
{
	int t,n,temp,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)arr[i]=i+1;
		do
		{
			temp = 0;
			for(int i=0;i<n;i++)
			{
				if(abs(arr[i] - (i+1)) < k)
				{
					temp = -1;
					break;
				}
			}
			if(temp==0)
			{
				for(int i=0;i<n;i++)cout<<arr[i]<<" ";
				cout<<endl;
			}
		}while(next_permutation(arr,arr+n));
	}
}
