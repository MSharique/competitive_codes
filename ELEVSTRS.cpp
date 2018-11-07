#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    double n, v1, v2;
    cin>>t;
    while(t--)
    {
        cin>>n>>v1>>v2;
        // cout<< " n = " << n << ", v1 = " << v1 << ", v2 = "<< v2 << endl;
        v1 =  2 * v1 * v1;
        v2 = v2 * v2;
        // cout<<"t1 = " << v1 << " and t2 = " << v2 << endl;
        if(v1 < v2)
            cout<<"Elevator"<<endl;
        else
            cout<<"Stairs"<<endl;
    }
    return 0;
}
