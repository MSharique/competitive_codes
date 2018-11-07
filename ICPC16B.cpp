#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,n, num, cnt1, cnt0, cntn1, cnt;
    cin>>t;
    while(t--) {
        cin>>n;
        cnt1 = 0;   
        cnt0 = 0;
        cntn1 = 0;
        cnt = 0;
        for(int i=0; i<n; i++) {
            cin>>num;
            switch(num) {
                case 1: cnt1++;break;
                case 0: cnt0++;break;
                case -1: cntn1++;break;
                default: cnt++;break;
            }
        }
        // cout<<"other: "<<cnt<<", 1: "<<cnt1<<", 0: "<<cnt0<<" , -1: " << cntn1<<endl;
        if(cnt>1)cout<<"no\n";
        else if(cnt>0 and cntn1>0)cout<<"no\n";
        else if(cntn1>1 and cnt1==0)cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}

