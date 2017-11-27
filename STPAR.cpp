#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
using namespace std;

int arr[1003];
stack<int> st;
int ans[1003];

int main()
{
	int t;
	while(cin>>t)
	{
		if(t==0)break;
		for(int i=0;i<t;i++)cin>>arr[i];
		ans[0] = 0;
		int it=0;
		for(int i=0;i<t;i++)
		{
//			cout<<"\n arr["<<i<<"] : "<<arr[i]<<endl;
			if(arr[i]-ans[it]==1)
			{
//				cout<<"difference  === 000 \n";
				ans[++it] = arr[i];
			}
			else 
			{
				while(!st.empty() && st.top()<arr[i])
				{
					ans[++it] = st.top();
					st.pop();
				}
//				cout<<"\n push here \n";
				st.push(arr[i]);
			}
		}
		while(!st.empty())
		{
			ans[++it] = st.top();
			st.pop();
		}
/*		cout<<"\n arr : \n";
		for(int i=0;i<t;i++)cout<<arr[i]<<" ";cout<<endl;
		cout<<"\n ANS : \n";
		for(int i=0;i<=t;i++)cout<<ans[i]<<" ";cout<<endl;
*/		it = 0;
		for(it=0;it<=t;it++)
		{
			if(ans[it]!=it)break;
		}
		if(it==t+1)cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
