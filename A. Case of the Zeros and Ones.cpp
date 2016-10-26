#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;

stack<int> st;

int main()
{
	int t;
	cin>>t;
	string str;
	cin>>str;
	st.push(str[0]-'0');
	for(int i=1;i<t;i++)
	{
		int temp = str[i]-'0';
		if(!st.empty() && temp!=st.top())st.pop();
		else st.push(temp);
	}
	cout<<st.size();
	while(!st.empty())st.pop();
	return 0;
}
