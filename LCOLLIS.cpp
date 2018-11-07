#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, m;
    string str;
    int mat[11][11];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<11; i++)
            for(int j=0; j<11; j++)
                mat[i][j] = 0;
        // cin>>str;
        for(int i=0; i<n;i++)
        {
            cin>>str;
            for(int j=0; j<m;j++)
                mat[i][j] = str[j] == '0' ? 0 : 1;
        }

        int cnt = 0;
        for(int i=0; i<n;i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=0; k<m; k++)
                {
                    if(mat[i][k] == 1 and mat[j][k]==1)
                        cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

