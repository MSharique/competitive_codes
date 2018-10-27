#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, temp;
    cin>>t;
    while(t--)
    {
        vector<int> input(1001, 0);
        cin>>n;
        for(int i=0; i<n;i++)
        {
            cin>>temp;
            input[temp]++;
        }
        int highest = 0, second_highest = 0;
        for(int i=0;i<1001; i++)
        {
            if(input[i] > 3) {
                second_highest = i;
                highest = i;
            }
            else if(input[i] > 1)
            {
                second_highest = highest;
                highest = i;
            }
        }
        highest = highest * second_highest;
        if(highest == 0)
            cout<<-1<<endl;
        else
            cout<<highest<<endl;
    }
    return 0;
}
