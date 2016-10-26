#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[6];

int main()
{
	int t,n,temp,sum;
	scanf("%d",&t);
	while(t--)	
	{
		scanf("%d",&n);
		sum = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			arr[temp]++;
			sum += temp; 
		}
		if(arr[2])
		{
			printf("No\n");
		}
		else if(arr[5]==0)
		{
			printf("No\n");
		}
		else
		{
			if( (sum*1.0)/n >= 4.0)printf("Yes\n");
			else printf("No\n");
		}
		for(int i=0;i<6;i++)arr[i]=0;
	}
	return 0;
}
