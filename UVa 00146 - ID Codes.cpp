#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	bool flag = true;
	while(cin>>str)
	{
		if(str=="#")break;
		if(next_permutation(str.begin(),str.end()))
		{
			cout<<str<<endl;
		}
		else cout<<"No Successor\n";
	}
	return 0;
}
