#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int up_count = 0, down_count = 0;
        if(str[0]=='U')
            up_count++;
        else
            down_count++;
        for(int i=1; i<str.length(); i++)
        {
            if(str[i]!=str[i-1])
            {
                if(str[i]=='U')
                    up_count++;
                else
                    down_count++;
            }
        }
        cout<<min(up_count, down_count)<<endl;
    }
    return 0;
}
