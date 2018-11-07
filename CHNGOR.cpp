#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans = 0;
        int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            ans = ans | temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
