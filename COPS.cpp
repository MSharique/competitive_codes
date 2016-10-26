#include<iostream>
#include<algorithm>
using namespace std;

int arr[101];

int main()
{
	int t,m,x,y;
	cin>>t;
	while(t--)
	{
		cin>>m>>x>>y;
		x = x*y;
		for(int i=0;i<m;i++)cin>>arr[i];
		sort(arr,arr+m);
		int cnt=0;
		for(int i=1;i<=100;i++)
		{
			bool flag = true;
			for(int j=0;j<m;j++)
			{
				if(abs(i-arr[j] ) <= x)flag = 0;
			}
			if(flag)cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
