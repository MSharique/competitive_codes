#include<iostream>
#define N 1000000
#include<cmath>
#include<cstdio>
using namespace std;
int prime[N+1];
 
void sieve(){
    prime[0]=1;
    prime[1]=1;
    for(long long i=2;i<=N;i++){
        if(!prime[i]){
                        prime[i]=i;
            for(long long j=i;j*i<=N;j++){
                prime[j*i]=i;
            }
        }
    }
}
 
long long int primeFactorize(int n){
    long long int yy=1;
    for( ; n > 1 ; ){
        int p = prime[n] , e = 0 ;
        for( ; n % p == 0 ; n /= p , e++ ) ;  
        yy*= ((p-1)*(pow((double)p,e-1)));
    }
    return yy;
}
 
 
int main()
{
   sieve();
   int t;
   scanf("%d",&t);
   //for(int i=0;i<25;i++)cout<<prime[i]<<" ";cout<<endl;
   while(t--)
   {
    int n;
    scanf("%d",&n);
    long long int ll = primeFactorize(n);
    if(prime[ll]==ll && ll!=1)cout<<"TRUE\n";
    else cout<<"FALSE\n";
    //printf("%lld\n",ll);              
   } 
    
   return 0;
}
