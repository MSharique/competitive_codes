#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

long long ans[100003];
string str;

long long modexpo(long long a,long long b,int n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
        {
            d=(d*a)%n;
        }
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}

int main()
{
	int t,m;
	long long n,a,b;
/*	cin>>t;
	while(t--)
	{
*/		cin>>str>>m;
		int len = str.size();
		int po = 0;
		n= 0;
		for(int i=len-1;i>=0;i--)
		{
			a = (str[i]-'0')%m;
			b = modexpo(10,po++,m);
			n = ( ( a * b )%m + n%m ) % m ;
			ans[i] = n;
		}
		for(int i=0;i<len;i++)cout<<ans[i]<<" ";
/*		cout<<endl;
	}*/
	return 0;
}
