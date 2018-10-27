#include <bits/stdc++.h>
using namespace std;

main(int argc, char const *argv[])
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(int i=1;i<=1000;i++)
        {
            // odd - Limak turn 
            if(i&1) {
                if(a>=i)
                    a = a-i;
                else {
                    cout<<"Bob\n";
                    break;
                }
            }
            // even - Bob turn
            else {
                if(b>=i)
                    b = b - i;
                else {
                    cout<<"Limak\n";
                    break;
                }
            }
        }
    }
    return 0;
}
