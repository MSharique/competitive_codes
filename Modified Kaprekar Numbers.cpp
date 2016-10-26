#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> vec;

int main()
{
	long long int x,r,po;
	bool first_rem = true;
	for(int i=1;i<=100000;i++)
	{
		po = i;
		po = po * po;
		r = 0;
		int cnt = 0;
		while(po)
		{
			int rem = po%10;
			if(first_rem)r = rem;
			else 
			{
				int temp = cnt;
				int ten = 1;
				while(cnt--)ten = ten*10;
				cnt = temp;
				r = rem*ten+r;
			}
			po = po / 10;
			x = po + r;
			if(x==i && r!=0)vec.push_back(i);
			first_rem = false;
			cnt++;
		}
		first_rem = true;
	}
	sort(vec.begin(),vec.end());
	int p,q;
	cin>>p>>q;
	vector<int> :: iterator it1 = lower_bound(vec.begin(),vec.end(),p);
	vector<int> :: iterator it2 = upper_bound(vec.begin(),vec.end(),q);
	while(it1 < it2)cout<<*it1<<" " , it1++ , p =-1;
	if(p!=-1)cout<<"INVALID RANGE";
	return 0;
}
