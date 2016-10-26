#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int arr[1003];

int main()
{
	int n,k,ans,temp;
	while(cin>>n>>k)
	{
		if(n==k && n==0)break;
		if(n==1)cout<<1<<endl;
		else
		{
			for(int i=1;i<=n;i++)arr[i] = i ;
			temp = n;
			int it = 1;
			while(temp>1)
			{
				int cnt = 0;
				while(cnt < k)
				{
					if(it > n)it = 1;
					if(arr[it]!=0)cnt++;
					it++;
				}
				ans = it-1;
				arr[ans] = 0;
				cnt = 0;
				while(cnt < k)
				{
					if(it>n)it=1;
					if(arr[it]!=0)cnt++;
					it++;
				}
				arr[ans] = arr[it-1];
				arr[it-1] = 0;
				it = ans + 1;
				temp--;
			}
			if(arr[ans]==1)cout<<1<<endl;
			else 
			{
				ans = arr[ans]-1;
				n = n + 1;
				ans = n - ans;
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}  
   
