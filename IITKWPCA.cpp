#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<set>
#include<vector>
#include<sstream>
#include<cstdlib>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str,temp;
	getchar();
	for(int i=0;i<n;i++)
	{
		set<string> st;
		getline(cin,str);
		stringstream s (str);
		while(s >> temp)
		{
			st.insert(temp);
		}
		cout<<st.size()<<endl;
		st.clear();
		//getchar();
	}
	return 0;
}
