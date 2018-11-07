#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    string str;
    cin>>t;
    while(t--) {
        cin>>n>>str;
        string ht = "";
        for(int i=0;i<n;i++) {
            if(str[i]!='.')ht += str[i];
        }
        int cnt = 0;
        size_t nPos = ht.find("HT", 0); // first occurrence
        while(nPos != string::npos)
        {
            cnt++;
            nPos = ht.find("HT", nPos + 1);
        }
        if(cnt*2 == ht.length())cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
    return 0;
}
