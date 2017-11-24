#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t, cntA, cntB;
	cin>>t;
	string str;
	while(t--) 
	{
		cin>>str;
		cntB = 0;
		cntA = 0;
		int it = 0, st;
		while(str[it] == '.' && it<str.length())it++;
		if(it<str.length())
		{
			st = it;
			if(str[it] == 'A')
				cntA++;
			else 
				cntB++;
		}	
		for(;it < str.length(); it++)
		{
			if(str[it] != '.')
			{
				if(str[it] == str[st])
				{
					if(str[it] == 'A')
					{
						cntA += it-st;
						st = it;
					}
					else
					{
						cntB += it-st;
						st = it;
					}
				}
				else
				{
					st = it;
					if(str[st]== 'A')
						cntA++;
					else
						cntB++;
				}
			}
		} 
		cout<<cntA<<" "<<cntB<<endl;
	}
	return 0;
}