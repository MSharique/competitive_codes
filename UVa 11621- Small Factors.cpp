#include<bits/stdc++.h>
using namespace std;

set<long long int> st;

void init()
{
	st.insert(2);
	st.insert(3);
	set<long long int>:: iterator it = st.begin();
	
	while(true)
	{
		if(*it > INT_MAX)break;
		long long int temp = *it;
		long long int two = 2;
		long long int three = 3;
		temp = temp*two;
		st.insert(temp);
		temp = *it;
		temp = temp * three;
		st.insert(temp);
		it++;
	}
}

int main()
{
	int num;
	init();
	while(cin>>num)
	{
		if(num==0)break;
		set<long long int> :: iterator it;
		if(binary_search(st.begin(),st.end(),num) || num==1)
		{
			cout<<num<<endl;
		}
		else
		{
			it = upper_bound(st.begin(),st.end(),num);
			cout<<*it<<endl;
		}
	}
	st.clear();
	return 0;
}
