#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int ar[1001][1001];

int main()
{
	ofstream f1;
	ifstream f2;
	f2.open("input.in");
	f1.open("output.out");
	int n,q;
	f2>>n>>q;
	//cin>>n>>q;
	cout<<"\n n = "<<n<<" , q = "<<q<<endl;
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
	f2>>ar[i][j];
//			cin>>ar[i][j];

	dp[0][0]=ar[0][0];
	for(i=1;i<n;i++)
	{
		dp[0][i]=ar[0][i]^dp[0][i-1];
		dp[i][0]=ar[i][0]^dp[i-1][0];
	}

	for(i=1;i<n;i++)
		for(j=1;j<n;j++)
			dp[i][j] = dp[i-1][j]^dp[i][j-1]^dp[i-1][j-1]^ar[i][j];


	while(q--)
	{
		int a,b,x,y;
	//	cin>>a>>b>>x>>y;
		f2>>a>>b>>x>>y;
		int res = dp[x][y];
		if((a-1)>=0)
			res^=dp[a-1][y];
		if((b-1)>=0)
			res^=dp[x][b-1];
		if((a-1)>=0 && b-1>=0)
			res^=dp[a-1][b-1];
		cout<<res<<endl;
		f1<<res<<endl;
	}
	f1.close();
	f2.close();
	return 0;
}
