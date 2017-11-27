#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

int arr[501];

int main()
{
	int t,n,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		int total = 0;
		int cnt = 0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					sum = arr[i] + arr[j] + arr[k];
					//cout<<"\n sum : "<<sum<<" , i::j::k "<<i<<"::"<<j<<"::"<<k<<endl;
					int temp = cbrt(sum);
					temp = temp*temp*temp;
					if(temp==sum)cnt++;
					total++;
				}
			}
		}
		double prob = (cnt*1.0)/total;
		cout<<fixed<<setprecision(9)<<prob<<endl;
	}
	return 0;
}
