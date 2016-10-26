#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

int arr[1003];
int str[100003];

int main()
{
	int t,n,cnt;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				int temp  = __gcd(arr[i],arr[j]);
				str[temp]++;
			}
		}
		cnt = 0;
		int mx = *max_element(arr,arr+n);
		for(int i=0;i<=mx;i++)
		{
			if(str[i]!=0)cnt++ , str[i]=0;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
