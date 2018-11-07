#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    num = (num%4 == 0 ? num+1 : num-1);
    cout<<num;
    return 0;
}