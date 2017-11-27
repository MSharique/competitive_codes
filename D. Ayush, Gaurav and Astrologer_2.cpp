#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<vector>
#include<utility>
using namespace std;
const int MOD = 1000000007;
int n;

struct matrix
{
	long long int arr[62][62];
};

matrix multiply(matrix first , matrix second)
{
	matrix temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int  k = temp.arr[i][j] = 0;k<n;k++)
			{
				temp.arr[i][j] =( (temp.arr[i][j]%MOD) + ( (first.arr[i][k]%MOD) * (second.arr[k][j]%MOD) ) % MOD ) % MOD;
				temp.arr[i][j] = temp.arr[i][j] % MOD;
			}
		}
	}
	return temp;
}

matrix mat_expo(matrix mat,int exp)
{
	matrix temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			temp.arr[i][j] = (i==j);
		}
	}
	while(exp)
	{
		if( exp & 1 )temp = multiply(temp,mat);
		mat = multiply(mat,mat);
		exp = exp >> 1; 
	}
	return temp;
}

int main()
{
	int m,a,b,l,r;
	cin>>n>>m;
	//cout<<"]n no of nodes : "<<n<<" , no of paths  : "<<m<<endl;
	matrix init;
	matrix ans;
	matrix ans1;
	/*cout<<"\n default vLUE OF F]A=MATRIX : \n";
	for(int i=0;i<31;i++)
	{
		for(int j=0;j<31;j++)
		{
			cout<<init.arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		init.arr[a-1][b-1] += 1;
	}
	/*cout<<"\n directed path : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<init.arr[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	// Bifircating 
	int temp = n;
	n = n * 2;
	for(int i=temp,j=0;i<n;i++)
	{
		init.arr[j++][i] = 1;
		init.arr[i][i] = 1;
	}

/*	cout<<"\n after bifircating : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<init.arr[i][j]<<" ";
		}
		cout<<endl;
	}
*/	
	cin>>a>>b;
	a-- , b--;
//	cout<<"\n path from node "<<a<<" to node "<<b <<endl;
	cin>>l>>r;
	int tc = l , tr = r;
	l = min(tc,tr);
	r = max(tc,tr);
/*	cout<<"\n path cost ranges from "<<l<<" , to "<<r<<endl;
	cout<<"\n *****************DEBUG****************** \n";
	for(int i=0;i<=r;i++)
	{
		matrix x = mat_expo(init,i);
		matrix abc ;
		for(int ai=0;ai<temp;ai++)
		{
			for(int j=0;j<temp;j++)
			{
				abc.arr[ai][j] = x.arr[ai][j] + x.arr[ai][j+temp];
				abc.arr[ai][j] = abc.arr[ai][j] % MOD;
			}
		}
	cout<<"\n matrix with path "<<i<<" : \n";
		for(int z=0;z<n;z++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<abc.arr[z][j]<<" ";
			}
			cout<<endl;
		}
	}
	*/
	matrix ans_r = mat_expo(init , r);
	for(int i=0;i<temp;i++)
	{
		for(int j=0;j<temp;j++)
		{
			ans.arr[i][j] = ((ans_r.arr[i][j]%MOD) + (ans_r.arr[i][j+temp]%MOD))%MOD;
			ans.arr[i][j] = ans.arr[i][j] % MOD;
		}
	}


/*	cout<<"\n matrix with path "<<r<<" : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans_r.arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
*/	

matrix ans_l = mat_expo(init , l-1);
	for(int i=0;i<temp;i++)
	{
		for(int j=0;j<temp;j++)
		{
			ans1.arr[i][j] =( (ans_l.arr[i][j]%MOD) + (ans_l.arr[i][j+temp]%MOD) )%MOD;
			ans1.arr[i][j] = ans1.arr[i][j] % MOD;
		}
	}

/*	cout<<"\n MATRIX with path "<<l-1<<" : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<ans_l.arr[i][j]<<" ";
		}
		cout<<endl;
	}
*/	int xz = (ans.arr[a][b]%MOD);
	int yz = (ans1.arr[a][b]%MOD);
	xz = xz - yz;
	xz = xz % MOD;
	if(xz <0)xz = xz + MOD;
	cout<<xz;
	return 0;
}
