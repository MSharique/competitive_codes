#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>

using namespace std;

stack<int> st;
int arr[2003];

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		int x = count(str.begin(),str.end(),'X');
		for(int i=0;i<x;i++)cin>>arr[i];
		//for(int i=0;i<x;i++)cout<<arr[i]<<" , ";cout<<endl;
		int len = str.size();
		for(int i=len-1;i>=0;i--)
		{
			if(str[i]=='X')st.push(arr[--x]);
			else if(str[i]=='A')
			{
				int a = st.top();
				st.pop();
				a = a + st.top();
				st.pop();
				st.push(a);
			}
			else
			{
				int a = st.top();
				st.pop();
				a = max(a,st.top());
				st.pop();
				st.push(a);
			}
		}
	cout<<st.top()<<endl;
	while(!st.empty())st.pop();
	}	
	return 0;
}
