#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[101];
int lhs[1000003];
int rhs[1000003];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
//	cout<<"\n n = "<<n<<endl;
//	for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
	int itr=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i])
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<n;k++)
				{
					rhs[itr++] = arr[i] * (arr[j] + arr[k]);
				}
			}
		}
	}
	sort(rhs,rhs+itr);
/*	cout<<"\n Rhs : ";
	for(int i=0;i<itr;i++)cout<<rhs[i]<<" ";cout<<endl;
*/	int itl=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				lhs[itl++] = arr[i]*arr[j]  + arr[k];
			}
		}
	}
	sort(lhs,lhs+itl);
/*	cout<<"\n lhs : ";
	for(int i=0;i<itl;i++)cout<<lhs[i]<<" ";cout<<endl;
*/	int ans = 0;
	for(int i=0;i<itl;i++)
	{
		ans += upper_bound(rhs,rhs+itr,lhs[i]) - lower_bound(rhs,rhs+itr,lhs[i]);
	}
	cout<<ans 	<<endl;
	return 0;
}
