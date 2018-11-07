#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, num;
    cin>>t;
    while(t--) {
        cin>>num;
        num = num % 10;
        if(num == 0)
            cout<<0<<endl;
        else if(num == 5)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}