#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,t;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>d;
        long long int ans = 0;
        long long int x = a>c ? a : c;
        long long int y = b<d ? b : d;
        if(y>=x) {
            long long int t1 = y-a+1;
			long long int t2 = y-x+1;
			ans += (t1*t2 - t2*(t2+1)/2);
        }
        long long int t1 = b-a+1;
		long long int t2;
		if(c>b) 
            t2 = d-c+1;
		else 
            t2 = d-b;
		if(t2>0)
			ans += t1*t2;
            
        cout<<ans<<endl;
    }
    return 0;
}