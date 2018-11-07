#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<string> eat;
        // cin>>p_eat;
        for(int i=0; i<n;i++)
        {
            cin>>str;
            eat.push_back(str);
        }
        bool followed = true;
        if(eat[n-1] == "cookie") {
            followed = false;
        }
        else {
            for(int i=1;i<n;i++)
            {
                if(eat[i]==eat[i-1] and eat[i]=="cookie")
                {
                    followed =  false;
                    break;
                }
            }
        }
        if(followed)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        eat.clear();
    }
    return 0;
}
