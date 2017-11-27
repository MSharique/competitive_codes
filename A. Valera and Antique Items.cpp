#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;

set<int> st;
int main()
{
	int n,amnt;
	cin>>n>>amnt;
	int num,val;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		while(num--)
		{
			cin>>val;
			if(val<amnt)st.insert(i);
		}
	}
	cout<<st.size()<<endl;
	for(set<int> :: iterator it=st.begin();it!=st.end();it++)cout<<(*it)<<" ";
	st.clear();
	return 0;
}
