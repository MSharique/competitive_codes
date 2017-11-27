#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
#define LIM 1000000000000000000
typedef long long int  llu;
vector<llu> lucky;
vector<llu>::iterator low,up;	
void lucky_num_gen(llu);
llu temp;

int main()
{
	int t,q;
	llu a,b;
	lucky_num_gen(0L);
	cin>>q;
	sort(lucky.begin(),lucky.end());
	while(q--)
	{
		cin>>a>>b;
		low = lower_bound(lucky.begin(),lucky.end(),a);
		up = upper_bound(lucky.begin(),lucky.end(),b);
		a = low - lucky.begin();
		b = up - lucky.begin();
		a = abs(b-a);
		cout<<a<<"\n";
	}
	return 0;
}


void lucky_num_gen(llu mynumber)
{
	if(mynumber > LIM )
	{
		return ;	
	}
	temp = mynumber;
	temp *= 10;
	temp += 4;
	lucky.push_back(temp);
	lucky_num_gen(temp);
	temp += 3;
	lucky.push_back(temp);
	lucky_num_gen(temp);
}

