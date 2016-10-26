#include<iostream>
using namespace std;

int mat[501][501];

int main()
{
	int t,row,col,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>mat[i][j];
			}
		}
		
		col = 0;
		row = 0;
		while(col < m)
		{
			int i=row , j = col;
			while(i<n && j>-1)
			{
				cout<<mat[i][j]<<" ";
				i++;
				j--;
			}
			row = 0;
			col++;
		}
		
		row = 1;
		col = m-1;
		while(row < n)
		{
			int i=row,j=col;
			while(i<n && j>-1)
			{
				cout<<mat[i][j]<<" ";
				i++;
				j--;
			}
			row++;
			col = m-1;
		}
		cout<<endl;
	}
	return 0;
}
