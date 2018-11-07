#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int temp = min(a,b);
        a = max(a, b);
        b = temp;
        if(b%2==1)
        {
            // odd
            if(a-b < 3)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else {
            // even
            if(a-b == 2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
