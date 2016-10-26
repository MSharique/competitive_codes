#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;

int arr[100003];
int sort_arr[100003];
map<int,int> mp;

int main()
{
	int n,l=-1 , r=-1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sort_arr[i]  = arr[i];
	}
	sort(sort_arr,sort_arr+n);
	for(int i=0;i<n;i++)mp[sort_arr[i]] = i;
	for(int i=0;i<n;i++)arr[i] = mp[arr[i]];
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=i)
		{
			l = i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]!=i)
		{
			r = i;
			break;
		}
	}
	if(l==-1 || r==-1)cout<<"yes\n1 1";
	else
	{
		int i=l , j=r;
		for(;i<=j;i++,j--)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		bool flag = false;
		for(int i=0;i<n;i++)
		{
			if(arr[i]!=i)
			{
				flag = true;
				break;
			}
		}
		if(flag)cout<<"no";
		else cout<<"yes\n"<<++l<<" "<<++r;
	}
	mp.clear();
	return 0; 
}
