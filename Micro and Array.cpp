#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#include<utility>
using namespace std;

int arr[100003];
map <int, int> mp;
map <int, int> :: iterator it;

int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp.insert(make_pair(arr[i],i+1));
	}
	int type,x,y;
	while(q--)
	{
		cin>>type;
		if(type==0)
		{
			cin>>x>>y;
			mp.erase(arr[x-1]);
			mp.insert(make_pair(y,x));
			arr[x-1] = y;
		}
		else
		{
			cin>>x;
			it = mp.upper_bound(x);
			if(it == mp.end())
			{
				it = mp.find(x);
				if(it == mp.end())cout<<-1<<endl;
				else cout<<it->second<<endl;
			}
			else 
			{
				cout<<it->second<<endl;
			}
		}
	}
	mp.clear();
	return 0;
}
