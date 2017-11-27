#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[101][101];

int main()
{
	int t,n,row,col;
	bool corrupt,ok;
	while(cin>>n)
	{
		if(n==0)break;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)cin>>arr[i][j];
		row = col = -1;
		corrupt = false;
		ok = true;
		// sum ordering
		for(int i=0;i<n;i++)
		{
			t = 0;
			int tc = 0 , j;
			for(j=0;j<n;j++)
			{
				t = t + arr[i][j];
				tc = tc + arr[j][i];
			}
			if(t%2==1)
			{
				ok = false;
				if(row==-1)row=i+1;
				else 
				{
					corrupt = true;
					break; 
				}
			}
			if(tc%2==1)
			{
				ok = false;
				if(col==-1)col = i+1;
				else
				{
					corrupt = true;
					break;
				}
			} 
		}
		if(ok)cout<<"OK\n";
		else
		{
			if(corrupt)cout<<"Corrupt\n";
			else cout<<"Change bit ("<<row<<","<<col<<")\n";
		}
	}
	return 0;
}
