#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        string message;
        cin>>message;
        int lower = 0, upper = 0;
        for(int i=0; i<n;i++) {
            if(islower(message[i]))lower++;
            else upper++;
        }
        if(lower <= k)lower = 1;
        else lower = -1;

        if(upper <= k)upper = 1;
        else upper = -1;

        if(lower == upper) {
            if(lower == 1)
                cout<<"both"<<endl;
            else    
                cout<<"none"<<endl;
        }
        else {
            if(lower == 1)
                cout<<"brother"<<endl;
            else
                cout<<"chef"<<endl;
        }
    }
    return 0;
}