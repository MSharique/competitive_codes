#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int arr[100003];

int main()
{
	string str;
	cin>>str;
	int len = str.size();
	arr[0] = 0;
	for(int i=1;i<len;i++)
	{
		if(str[i]==str[i-1])arr[i] = arr[i-1] + 1;
		else arr[i] = arr[i-1];
	}
//	cout<<"\n arr : ";
//	for(int i=0;i<=len;i++)cout<<arr[i]<<" ";cout<<endl;
	int m,l,r;
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		cout<<arr[r-1]-arr[l-1]<<endl;
	}
	return 0;
}
