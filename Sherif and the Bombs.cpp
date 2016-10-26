#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<set>
#include<utility>
using namespace std;
typedef long long int lli; 
int mat[1003][1003];

int main()
{
	int n,x1,y1,r1;
	lli x2,y2,r2;
	cin>>n;
	while(n--)
	{
		cin>>x1>>y1>>r1;
		r1 = r1*r1;
		for(int i=1;i<1001;i++)
		{
			for(int j=1;j<1001;j++)
			{
				x2 = x1-i;
				x2 = x2 * x2;
				y2 = y1 - j;
				y2 = y2 * y2;
				x2 = x2 + y2;
				if(x2<=r1)mat[i][j]+= 1;
			}
		}
	}
	r2 = 0;
	for(int i=1;i<1001;i++)
	{
		for(int j=1;j<1001;j++)
		{
			if(mat[i][j] > 1)r2++;
		}
	}
	cout<<r2;
	return 0;
}
