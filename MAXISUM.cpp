#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

vector<pair<int,int> > vec;
long long int arr1[100003];
long long int arr2[100003];
long long int check[100003];

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		long long int sum = 0,ans = 0,temp1,temp2;;
		cin>>n>>k;
		for(int i=0;i<n;i++)cin>>arr1[i];
		for(int i=0;i<n;i++)cin>>arr2[i];
		for(int it=0;it<n;it++)
		{
			arr1[it] = arr1[it]*arr2[it];
			check[it] = arr2[it]*k;
			sum = sum + arr1[it];
		}
		//cout<<"\n after operations : \n";
		//for(int i=0;i<n;i++)cout<<"( "<<vec[i].first<<" , "<<vec[i].second<<" ) ";cout<<endl;
		
	/*	for(int i=0;i<n;i++)
		{
			temp1 = arr1[i];
			temp2 = arr2[i];
			temp1 = temp1 * temp2;
			//cout<<"multiply : "<<temp1<<endl;
			ans = ans + temp1; 
		}
		cout<<ans<<endl;
*/		//vec.clear();
		//for(int i=0;i<n;i++)cout<<check[i]<<" ";cout<<endl;
		for(int i=0;i<n;i++)
		{
			ans = max(ans,max(check[i],-check[i]));
		}
		temp1 = sum + ans;
		cout<<temp1<<endl;
	}		
	return 0;
}
