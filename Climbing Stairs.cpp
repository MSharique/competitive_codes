#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int a,b,n,ans;
    cin>>a>>b>>n;
    a = a-b;
    ans = n/a;
	//cout<<"\n divide = "<<ans<<endl;
    int ans1 = n%a;
    //cout<<"\n modulud = "<<ans1<<endl;
    if(ans1 <= b)cout<<ans;
    else cout<<ans+1;
    return 0;
}

