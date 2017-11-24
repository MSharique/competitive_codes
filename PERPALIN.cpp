#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,p;
	cin>>t;
	while(t--) 
	{
		cin>>n>>p;
		if(p<3)
			cout<<"impossible\n";
		else
		{
			string str = "a";
			for(int i=2;i<p;i++)str += "b";
			str += "a";
			p = n/p;
			string ans = "";
			while(p--)
			{
				ans = ans + str;
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}