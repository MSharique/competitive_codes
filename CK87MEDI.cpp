#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> arr;
        int value;
        for(int i=0; i<n;i++)
        {
            cin>>value;
            arr.push_back(value);
        }
        sort(arr.begin(), arr.end());
        k += n;
        k /= 2;
        if(k<n){
            cout<<arr[k]<<endl;
        }
        else
            cout<<arr[n-1]<<endl;
        arr.clear();
    }
    return 0;
}
