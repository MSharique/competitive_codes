#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,n, num, exp_num;
    bool ans = true;
    cin>>t;
    while(t--)
    {
        cin>>n;
        exp_num = 1;
        int step = 1;
        ans = true;
        // cout<<"**********************************\n";
        for(int i=0;i<n;i++)
        {
            cin>>num;
            // cout<<"num -> "<<num << ", exp_num = " << exp_num << endl;
            if(num!=exp_num) {
                ans = false;
                // break;
            }
            if(i == n/2) {
                step = -1;
            }
            exp_num += step;
        }
        if(ans and exp_num == 0)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
