#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

int arr[101][101];
set<int> st;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1 || arr[i][j]==3)
			{
				flag = false;
				break;
			}
		}
		if(flag)st.insert(i);
		flag = true;
	}
	cout<<st.size()<<endl;
	for(set<int> :: iterator it=st.begin();it!=st.end();it++)cout<<*it + 1<<" ";
	st.clear();
	return 0;
}
