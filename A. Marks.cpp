#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

int arr[101][101];
int mat[101][101];
string temp;
set<int> st;

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		for(int j=0;j<m;j++)arr[i][j] = temp[j]-'0';
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		mat[j][i] = arr[i][j];
	}
	cout<<"\n mat : \n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)cout<<mat[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
