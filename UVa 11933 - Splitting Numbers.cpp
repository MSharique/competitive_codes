#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,sum;
    while(cin>>n)
    {
        if(n==0)break;
        int x=n;
        c=0;
        a=0;
        sum=0;
        while(x!=0)
        {
            if(x%2==1)
            {
                a++;
                if(a%2==1)
                {
                    sum+=pow(2.0,c);
                }
            }
            x/=2;
            c++;
        }
        b = n - sum;
        a = sum;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}


