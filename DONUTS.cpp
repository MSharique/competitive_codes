#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int arr[20003];

int main()
{
	int t,n,m,cnt,start,last;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<m;i++)cin>>arr[i];
		cnt = start = 0;
		last = m-1;
		sort(arr,arr+m);
		while(start < last)
		{
			if(arr[start]==1)
			{
				m = m - 2;
				cnt++;
				last--; 
				arr[last] = arr[last] + arr[last+1] + 1 ;
			}
			else
			{
				m = m - 1;
				cnt++;
				arr[last] = arr[last] + arr[start];
			}
			start++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
