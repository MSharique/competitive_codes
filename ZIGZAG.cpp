#include<bits/stdc++.h>
using namespace std;

string convert(string A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    if(B==1)return A;
    int len = A.length();
    B--;
    string ret="";
    int fir = (2*B) ;
    cout<<"\n fir = "<<fir<<endl;
    int it = fir;
    int fac  = 2;
    fir = fir - 2;
    for(int i=0;i<len;i = i + it)ret += A[i];
    
    for(int i=1;i<B;i++)
    {
    	bool flag = true;
    	ret = ret + A[i];
    	for(int j=i;j<len;)
    	{
    		if(flag)j = j + fir;
			else j = j + fac;
			if(j<len)ret = ret + A[j];
			flag = !flag;  
    	}
     	cout<<ret<<endl;
	    fir = fir -2;
	    fac = fac + 2;
    }
    cout<<"\n str "<<ret<<endl;
    for(int i=B;i<len;i = i + it)ret += A[i];
    return ret;
    
}

int main()
{
	string A;
	int B;
	cin>>A>>B;
	cout<<convert(A,B);
	return 0;
}

