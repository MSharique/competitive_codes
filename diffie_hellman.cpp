#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

long long int power(int a,int b,int mod)
{
 	long long int t;
 	if(b==1)return a;
 	t=power(a,b/2,mod);
 	if(b%2==0)return (t*t)%mod;
 	else  return (((t*t)%mod)*a)%mod;
}


int main()
{
 int n,g,x,a,y,b;
 // both the persons will be agreed upon the common n and g
 cin>>n>>g;
 cout<<"\nCommon n = "<<n<<" , g = "<<g<<endl;
 
 // first person will choose the x
 cout<<"\nEnter the value of x for the first person : ";
 cin>>x;
 a=power(g,x,n);
 
 // second person will choose the y
 cout<<"\nEnter the value of y for the second person : ";
 cin>>y;
 b=power(g,y,n);
 
 printf("\n\nkey for the first person is : %lld\n",power(b,x,n));
 printf("\nkey for the second person is : %lld\n",power(a,y,n));
 return 0;
}


