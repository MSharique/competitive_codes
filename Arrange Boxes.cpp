#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int arr_initial[100003];
int pos[100003];
int arr_final[100003];
int final;

void merge_sort(int l,int m,int h)
{
	int i=l , j= m+1,it=l;
	while(i<=m && j <= h)
	{
		if(pos[arr_initial[i]] < pos[arr_initial[j]])
		{
			//kuch mt karo
			arr_final[it] = arr_initial[i];
			i++;it++;
		}
		else
		{
			final += m - i + 1;
			arr_final[it] = arr_initial[j];
			j++;it++;
		}
	}
	while(i<=m)arr_final[it++] = arr_initial[i++];
	while(j<=h)arr_final[it++] = arr_initial[j++];
	for(i=l;i<=h;i++)arr_initial[i] = arr_final[i];
}

void merge(int low,int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		merge(low,mid);
		merge(mid+1,high);
		merge_sort(low,mid,high);
	}
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		final = 0;
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr_initial[i];
		for(int i=0;i<n;i++)cin>>arr_final[i] , pos[arr_final[i]] = i;
		merge(0,n-1);
		cout<<final<<endl;
	}
	return 0;
}
