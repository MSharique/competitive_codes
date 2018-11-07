#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string stu;
    cin>>t;
    while(t--) {
        cin>>stu;
        // replace(stu.begin(), stu.end(), '<', '#');
        // replace(stu.begin(), stu.end(), '>', '<');
        // replace(stu.begin(), stu.end(), '<', '>');
        for(int i=0;i<stu.length(); i++) {
            if(stu[i] == '<')
                stu[i] = '>';
            else if(stu[i] == '>')
                stu[i] = '<';
        }
        int cnt = 0;
        // cout<<"end ste: " << stu << endl;
        size_t nPos = stu.find("><", 0);
        while(nPos != string::npos) {
            cnt++;
            nPos = stu.find("><", nPos+1);
        }
        cout<<cnt<<endl;
    }
    return 0;
}