#include <iostream>
using namespace std;
int t,init,n,zero,one,two;

void myfun(int pos , int it)
{
	//cout<<"pos : "<<pos<<" , it : "<<it<<endl;
	if(it ==n )return;
	if(pos==1 && it<n)
	{
		zero++;
		myfun(0,it+1);
		//two++;
		//myfun(2,it+1);
		//cout<<"Suspect 1\n";
	}
	if(pos==0&& it<n)
	{
		one++;
		myfun(1,it+1);
	}
	if(pos==2 && it<n)
	{
		one++;
		myfun(1,it+1);
	}
}

int main()
{
    //cout << "Hello World!" << endl;
    cin>>t;
    while(t--)
    {
    //	cout<<"111111111111\n";
    	cin>>init>>n;
    ///	cout<<"inint  : "<<init<<" , n = "<<n<<endl;
    //	cout<<"...............\n";
    	zero = one = two = 0;
    //	cout<<"0000000\n";
    	myfun(init,0);
    //	cout<<"xero L "<<zero<<" , one "<<one<<" , two : "<<two<<endl;
    	if(zero>=one && zero>=two)cout<<0<<endl;
    	else if(one>=zero && one>=two)cout<<1<<endl;
    	else cout<<2<<endl;
    }
    return 0;
}

