#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int t,cs=1;
	cin>>t;
	long long int a,b,tmp;
	string str;
	while(t--)
	{
		cin>>str;
		int len = str.size();
		a = 0;
		for(int i=len-1,j=0;i>=0;i--,j++)
		{
			tmp = pow(2.0,j);
			tmp = tmp * (str[i]-'0');
			a = a + tmp;
		}
		cin>>str;
		len = str.size();
		b = 0;
		for(int i=len-1,j=0;i>=0;i--,j++)
		{
			tmp = pow(2.0,j);
			tmp = tmp * (str[i]-'0');
			b = b + tmp;
		}
		cout<<"\n number a  = "<<a<<" , number b = "<<b<<endl;
		cout<<"Case "<<cs++<<": ";
		if(b==0)cout<<"NO\n";
		else {
		if(a%b==0)cout<<"YES\n";
		else cout<<"NO\n";
		}
	}
	return 0;
}
