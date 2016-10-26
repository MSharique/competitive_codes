#include<iostream>
#include<cstdio>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int arr[100003];
bool visit[100003]; 

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			visit[i] = true;
		}
		int cnt = 0;
		for(int i=0;i<n;i++)
		{
			int q = i;
			while(visit[q])
			{
				visit[q] = false;
				q = q + arr[q];
				q = q % n;
				if(q==i)
				{
					cnt++;
					break;
				}
			}
			for(int k=0;k<n;k++)visit[k] = true;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
