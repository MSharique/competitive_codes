#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<utility>
using namespace std;

vector<vector<int> > vec(4);

int main()
{
	string str;
	cin>>str;
	int len = str.size();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='C')vec[0].push_back(i);
		else if(str[i]=='H')
		{
			if(vec[0].size() > vec[1].size() )vec[1].push_back(i);
		}
		else if(str[i]=='E')
		{
			if(vec[1].size() > vec[2].size() )vec[2].push_back(i);
		}
		else 
		{
			if(vec[2].size() > vec[3].size() )vec[3].push_back(i);
		}
	}
	cout<<vec[3].size();
	return 0;
	return 0;
}
