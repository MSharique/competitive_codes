#include <bits/stdc++.h>
using namespace std;

stack<char> st;
string str;

int main()
{
	while (cin>>str)
	{
		int count = 0,i=0;
		int len = str.length();
		for (i=0;i<len;i++)
		{
			//it++;
			count++;
			if(str[i] == '(' || str[i] == '[' || str[i] == '<' || str[i] == '{')
			{
				if (str[i] == '(' && str[i+1] == '*')
				{
					st.push('*');
					i++;
				}
				else st.push(str[i]);
			}
			else if ((str[i] == ')' || str[i] == ']' || str[i] == '>' || str[i] == '}') || (str[i] == '*' && str[i+1] == ')'))
			{
				if (st.empty())	break;
				if (str[i] == '*')
				{
					if (st.top() != '*')break;
					st.pop();
					i++;
				}
				else if (str[i] == ')')
				{
					if (st.top() != '(')break;
					st.pop();
				}
				else if (str[i] == ']')
				{
					if (st.top() != '[')break;
					st.pop();
				}
				else if (str[i] == '>')
				{
					if (st.top() != '<')break;
					st.pop();
				}
				else if (str[i] == '}')
				{
					if (st.top() != '{')break;
					st.pop();
				}
			}
		}

		if (i < len || !st.empty())
		{
			if (i>=len && !st.empty())count++;
			cout<<"NO "<<count<<endl;
		}
		else cout<<"YES\n";

		while (!st.empty())st.pop();
	}

	return 0;
}

