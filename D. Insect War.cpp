#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
void multiply(int F[2][2], int M[2][2]);
void power(int F[2][2], int n,int ,int );

long long fib(int n,int a,int b)
{
  int F[2][2] = {{1,2},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1,a,b);
  long long int sum=0;
  sum+=(F[0][0]*b);
  sum%=mod;
  sum+=(F[0][1]+F[1][1])*a;
  sum%=mod;
  return sum;
}

/* Optimized version of power() in method 4 */
void power(int F[2][2], int n,int a,int b)
{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,2},{1,0}};

  power(F, n/2,a,b);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(int F[2][2], int M[2][2])
{
  int x =  (F[0][0]*M[0][0])%mod + (F[0][1]*M[1][0])%mod;
  int y = ( F[0][0]*M[0][1])%mod + (F[0][1]*M[1][1])%mod;
  int z =  (F[1][0]*M[0][0])%mod + (F[1][1]*M[1][0])%mod;
  int w =  (F[1][0]*M[0][1])%mod + (F[1][1]*M[1][1])%mod;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

/* Driver program to test above function */
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  	int a,b,n;
  	scanf("%d %d %d",&a,&b,&n);
  	//cout<<n;
  	printf("%lld\n", fib(n+1,a,b));

  }

  return 0;
}
