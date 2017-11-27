#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int t,n,k;
    long long int m;
    cin>>t;
    while(t--)
    {
    	cin>>n>>k>>m;
    	long long int a,b;
	    a = n;
	    b = n+1;
	    if(a&1)
	    {
	    	b = b / 2;
	    }
	    else a = a / 2;
	    a = a * b;
	    a = a * a;
	    a = a * k;
	    if(a <=m )cout<<0<<endl;
	    else 
	    {
	    	a = a - m;
	    	cout<<a<<endl;
	    }
    }
    return 0;
}

