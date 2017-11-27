#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll func(char a)
{
   string s="IVXLCDMPRANSHTWYOKBUQ";
   ll n=1;
   for(ll i=0;i<s.length();i++)
   {
       if(s[i]==a)
       {
           break;
       }
       if(i%2) n*=2;
       else n*=5;
   }
   return n;
}
ll romanToInt(string a) 
{
  ll i=a.length()-1,sum=0,prev=0;
  for( ; i>=0; i--)
  {
    if(func(a[i])<prev)
    {       
	    sum -= func(a[i]);
    }
    else
    {
        sum += func(a[i]);
    }
    prev=func(a[i]);
  }
  return sum;
}
int main()
{
	ifstream f1;
	ofstream f2;
	f1.open("input.in");
	f2.open("output.out");
	string s;
	f1>>s;
	//cout<<"\ns : "<<s<<endl;
	ll ans = romanToInt(s);
	printf("%lld",ans);
	f2<<ans<<endl;
	f1.close();
	f2.close();
}
