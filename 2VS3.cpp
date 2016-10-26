#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string str;
int arr[100003];
int t[4*100003];

void build(int v,int tl,int tr)
{
	if(tl==tr)t[v] = arr[tl];
	else
	{
		int mid = (tl+tr)/2;
		build(v*2 , tl , tm);
		build(v*2 + 1 , tm+1,tr);
		t[v] = []
	}
}
