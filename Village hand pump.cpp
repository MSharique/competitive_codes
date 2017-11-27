#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
long long int arr[100003];

int main()
{
	long long int n,k;
	long long int sum = 0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum = sum + arr[i];
	}
	if(sum >= k)cout<<-1;
	else
	{
		long long int round = k/n;
		int round_possible = *min_element(arr,arr+n);
		if(round_possible >= round)
		{
			int fact =0;
			queue<int> que;
			for(int i=0;i<n;i++)
			{
				arr[i] = arr[i] - round;
				if(arr[i]!=0)que.push(i+1);
			}
			long long int offset = (k%n);
			for()
		}
	}
}
