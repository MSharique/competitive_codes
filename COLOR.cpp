#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t,n,r,g,b;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>n>>str;
		r = b = g = 0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='R')r++;	
			if(str[i]=='G')g++;
			if(str[i]=='B')b++;
		}
		r = max(r,max(g,b));
		n = n - r;
		cout<<n<<endl;
	}
}
