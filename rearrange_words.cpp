#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
//string str[100001];
string arr[100001][101];

void makeItLarge(n)
{
	for(int i=0;i<n;i++)
	{
		in tit=-1,jt=-1;
		int len = arr[i].length();
		for(int i=len-2;i>=0;i--)
		{
			if(arr[i] < arr[i+1])
			{
				
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	makeItLarge(n);
	cout<<"\n ans : \n";
	for(int i=0;i<n;i++)cout<arr[i]<<endl;
	return 0;
}
