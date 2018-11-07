#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int ans = (n-1)*(m-1)*2 + n + m - 2;
        cout<<ans<<endl;
    }
}