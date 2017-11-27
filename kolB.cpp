#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010
#define ll long long
#define INF 100000000
int A[MAXN][MAXN],L[MAXN][MAXN],R[MAXN][MAXN],U[MAXN][MAXN],D[MAXN][MAXN];

int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j)
				scanf("%d",&A[i][j]);
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j)
				L[i][j] = min(A[i][j],A[i][j]+L[i][j-1]);
		for(int i=1;i<=n;++i)
			for(int j=m;j>=1;--j)
				R[i][j] = min(A[i][j],A[i][j]+R[i][j+1]);
		for(int j=1;j<=m;++j)
			for(int i=1;i<=n;++i)
				U[i][j] = min(A[i][j],A[i][j]+U[i-1][j]);
		for(int j=1;j<=m;++j)
			for(int i=n;i>=1;--i)
				D[i][j] = min(A[i][j],A[i][j]+D[i+1][j]);
		int bestVal = INF;
		for(int i=1;i<=n;++i)
			for(int j=1;j<=m;++j)
			{
				int val = 0;
				if(L[i][j-1]<0)
					val += L[i][j-1];
				if(R[i][j+1]<0)
					val += R[i][j+1];
				if(U[i-1][j]<0)
					val += U[i-1][j];
				if(D[i+1][j]<0)
					val += D[i+1][j];
				val += A[i][j];
				bestVal = min(bestVal,val);
			}
			
			cout<<"\n input matrix :  \n";
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)cout<<A[i][j]<<" ";
				cout<<endl;
			}
			cout<<"\n L matrix :  \n";
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)cout<<L[i][j]<<" ";
				cout<<endl;
			}
			cout<<"\n R matrix :  \n";
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)cout<<R[i][j]<<" ";
				cout<<endl;
			}
			cout<<"\n U matrix :  \n";
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)cout<<U[i][j]<<" ";
				cout<<endl;
			}
			cout<<"\n D matrix :  \n";
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)cout<<D[i][j]<<" ";
				cout<<endl;
			}
		
		printf("%d\n",bestVal);
	}
	return 0;
}
