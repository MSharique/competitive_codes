#include <bits/stdc++.h>    
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a,b,c=0;
        for(int i=0; i<n;i++)
        {
            cin>>a>>b;
            if(k>=a)
            {
                k -= a;
                a = 0;
            }
            else {
                a = a-k;
                k=0;
            }
            c += a*b;
        }
        cout<<c<<endl;
    }
    return 0;
}
