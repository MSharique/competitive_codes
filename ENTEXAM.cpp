#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e, k, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>e>>m;
        vector<long long int> final_socore;
        for(int i=1; i<n; i++)
        {
            long long int temp, sum = 0;
            for(int j=0; j<e;j++) {
                cin>>temp;
                sum += temp;
            }
            final_socore.push_back(sum);
        }
        long long int temp, sergey_sum = 0;
        for(int j=1; j<e;j++) {
            cin>>temp;
            sergey_sum += temp;
        }
        sort(final_socore.begin(), final_socore.end());
        // cout<<"sergey till now: "<< sergey_sum << ", kth value = "<< final_socore[k-1] << endl;
        sergey_sum = final_socore[n-k-1]+1 - sergey_sum;
        temp = 0;
        sergey_sum = max(sergey_sum, temp);
        if(sergey_sum > m)
            cout<<"Impossible"<<endl;
        else
            cout<<sergey_sum<<endl;
        final_socore.clear();
    }
    return 0;
}