#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec;

int main()
{
	int n;
	string str;
	cin>>n>>str;
	for(int i=0;i<n;i++)
	{
		int temp = str[i]-'0';
		if(temp>1)
		{
			if(temp==2 || temp==3 || temp==5 || temp==7)vec.push_back(temp);
			if(temp==4)
			{
				vec.push_back(3);vec.push_back(2);vec.push_back(2);
			}
			if(temp==6)
			{
				vec.push_back(5);vec.push_back(3);
			}
			if(temp==8)
			{
				vec.push_back(7);vec.push_back(2);vec.push_back(2);vec.push_back(2);
			}
			if(temp==9)
			{
				vec.push_back(7);vec.push_back(3);vec.push_back(3);vec.push_back(2);
			}
		}
	}
	sort(vec.begin(),vec.end());
	n = vec.size();
	for(int i=n-1;i>=0;i--)cout<<vec[i];
	vec.clear();
	return 0;
}
