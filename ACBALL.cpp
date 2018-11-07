#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        string X, Y, Z="";
        cin>>X>>Y;
        int n = X.length();
        for(int i=0; i<n;i++)
        {
            if(X[i]==Y[i]) {
                if(X[i] == 'W')
                    Z += "B";
                else 
                    Z += "W";
            }else {
                Z += "B";
            }
        }
        cout<<Z<<endl;
    }
    return 0;
}
