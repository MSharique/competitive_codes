#include<iostream>
#include<cstdio>
#include<algorithm>
#include<fstream>
using namespace std;

int arr[1003];

int main()
{
	ifstream f2;
	ofstream f1;
	f1.open("output.out");
	f2.open("input.in");
	int t,n;
	f2>>t;
	while(t--)
	{
			f2>>n;
			for(int i=0;i<n;i++)f2>>arr[i];
			int temp = arr[0] , ans = 0;
			for(int i=0;i<n;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					for(int k=j+1;k<n;k++)
					{ 
						temp = arr[i] ^ arr[j] ^ arr[k] ;
						ans = max(ans,temp);
					}
				}
			}
			f1<<ans<<endl;
	}
	f2.close();
	f1.close();
	return 0;
}
