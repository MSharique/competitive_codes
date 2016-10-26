#include<stdio.h>
int arr[100005];
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i;
		scanf("%d%d",&n,&m);
		for(i=0;i<n;++i)
		{
			scanf("%d",&arr[i]);
		
		}
		if(m>n)
		{
			printf("-1\n");
			continue;
		}
		int low = 1e9;
		for(i=0;i<n;i++)
		{
			if(arr[i] < low)
			{
				low = arr[i];
			}
		}
		int high = 1e9, mid;
		while(low <high)
		{
			mid = (low+high)/2;
			int cnt = 0, curSum = 0;
			for(i=0;i<n;i++)
			{
				if(curSum+arr[i]<=mid)
				{
					curSum += arr[i];
				
				}
				else
				{
					curSum = arr[i];
					cnt++;
				}
			}
			cnt++;
			if(cnt<=m)
			{
				high = mid;	
			}
			else 
			{
				low = mid+1;
			}
		}
		int res = low;
		int cnt = 0, temp = 0;
		for(i=0;i<n;i++)
		{
			if(temp+arr[i]<=res)	temp += arr[i];
			else
			{
				temp = arr[i];
				cnt++;
			}
		}
		cnt++;
		if(cnt<=m)
			printf("%d\n",res);
		else
			printf("-1\n");
	}
	return 0;
}

/*
Codechef c++ compiler ..................NOT working
what the hell !
*/
