#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int arr[100003];
int st[100003];
int end[100003];
int main()
{
	int t,m,x;
	cin>>t;
	for(int i=0;i<t;i++)cin>>arr[i];
	st[1]=1;
	end[1] = arr[0];
	for(int i=2;i<=t;i++)
	{
		st[i] = end[i-1]+1;
		end[i] = end[i-1] + arr[i-1];
	}
	/*cout<<"\n ranges : \n";
	for(int i=0;i<=t;i++)
	{
		cout<<"\n pile no = "<<i<<" , st from "<<st[i]<<" , end at "<<end[i];
	}cout<<endl;
	*/cin>>m;
	while(m--)
	{
		cin>>x;
		int low = 1 , high = t;
		while(low<=high)
		{
			int mid = (low + high)/2;
			if(x>=st[mid] && x<=end[mid])
			{
				cout<<mid<<endl;break;
			}
			else if(x<st[mid])
			{
				high = mid;
			}
			else low = mid+1;
		}
	}
	return 0;
}
