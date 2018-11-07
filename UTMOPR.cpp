#include <bits/stdc++.h>
using namespace std;

int getSumValue(int first, int second)
{
    return (first+second)%2;
}

int main(int argc, char const *argv[])
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int first = 0, second, num;
        for(int i=0; i<n; i++) 
        {
            cin>>num;
            first = getSumValue(first, num%2);
        }
        if(k==1)
            cout<< (first == 0 ? "odd" : "even") << endl;
        else
            cout<< "even" << endl;
    }
    return 0;
}
