#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    long long int n,x,y;
    cin>>t;
    while(t--)
    {
    	cin>>n>>x>>y;
    	n = n - y;
    	n = n - x;
    	if(n==0)cout<<y<<endl;
    	else if(n<0)cout<<0<<endl;
    	else cout<<y+1<<endl;
    }
    return 0;
}

