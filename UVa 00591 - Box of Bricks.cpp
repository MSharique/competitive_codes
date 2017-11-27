#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[51];
int main()
{
	int n,cnt,sum,st=1;
	while(cin>>n)
	{
		if(n==0)break;
		sum = 0;
		for(int i=0;i<n;i++)cin>>arr[i] , sum += arr[i];
		sum = sum / n;
		cnt = 0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]-sum > 0)cnt += arr[i] - sum;
		}
		cout<<"Set #"<<st++<<endl;
		cout<<"The minimum number of moves is "<<cnt<<".\n\n";
	}
	return 0;
}
