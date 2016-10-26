#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
#include<climits>
using namespace std;

vector<pair<string,int> > vec(10);

int main()
{
	int t,mx,temp;
	string str;
	cin>>t;
	for(int ca=1;ca<=t;ca++)
	{
		mx = INT_MIN;
		for(int i=0;i<10;i++)
		{
			cin>>str>>temp;
			vec[i].first = str;
			vec[i].second = temp;
			mx = max(mx,temp);	
		}
		cout<<"Case #"<<ca<<":\n";
		for(int i=0;i<10;i++)
		{
			if(vec[i].second==mx)cout<<vec[i].first<<endl;
		}
	//	vec.clear();
	}
	vec.clear();
	return 0;
}
