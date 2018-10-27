#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, A, B, turns;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>turns;
        long long int alice = A;
        long long int bob = B;
        if(turns&1) {
            alice = alice + alice;
        }
        long long int temp = max(alice, bob);
        alice = min(alice, bob);
        temp = temp/alice;
        cout<<temp<<endl;
    }
    return 0;
}
