#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int arr[1003][1003];
bool visit[1003][1003];
int ans = 111111;
int t,n,sx,sy,ex,ey,bx,by;
	
void func(int i,int j,int cnt)
{
		cout<<"\n i = "<<i<<"  , j = "<<j<<" , cnt = "<<cnt; 
		if(i>n || j>n || i<0 || j<0)return ;
		if(i==bx && j==by)return ;
		arr[i][j] = min(arr[i][j] , cnt);
		if(!visit[i][j])return ;
		visit[i][j] = false;
		func(i+1,j,arr[i][j]+1);
		func(i-1,j,arr[i][j]+1);
		func(i,j+1,arr[i][j]+1);
		func(i,j-1,arr[i][j]+1);
}

int main()
{
	cin>>t;
	while(t--)
	{
		ans = 1111111;
		cin>>n>>sx>>sy>>ex>>ey>>bx>>by;
		for(int i=0;i<n+1;i++)
		{
			for(int j=0;j<n+1;j++){
			arr[i][j] = 1111111;
			visit[i][j] = true;
			}
		}
		func(sx,sy,0);
		cout<<arr[ex][ey]<<endl;
	}
	return 0;
}
