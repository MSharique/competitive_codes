#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
 
 int main()
 {
 	int t,n,m,cnt;
 	cin>>t;
 	while(t--)
 	{
 		cin>>n>>m;
 		if(m==0)
 		{
 			if(n==1)cout<<"Yes\n";
 			else cout<<"No 1\n";
 		}
 		else if(__gcd(n,m)==1)cout<<"Yes\n";
 		else
 		{
 			m = __gcd(n,m);
 			m = n / m;
 			cout<<"No "<<m<<endl;
 		}
 	}
 	return 0;
 }

