#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        set<int> st;
        int temp;
        for(int i=0; i<n;i++){
            cin>>temp;
            st.insert(temp);
        }
        for(int i=0; i<m;i++){
            cin>>temp;
            st.insert(temp);
        }
        n += m;
        n -= st.size();
        cout<<n<<endl;
        st.clear();
    }   
}