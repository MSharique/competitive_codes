#include<bits/stdc++.h>
using namespace std;

set<long long int> st;

int main()
{
	long long int t,c,r,cs=1;
	cin>>t;
	while(t--)
	{
		cin>>c>>r;
		cout<<"Case #"<<cs++<<":";
		if(r==c)
		{
			cout<<" 0\n";
			//st.insert(0);
		}
		else 
		{
			c = c - r;
			for(long long int i=1;i*i<=c;i++)
			{
				if(c%i==0)
				{
					st.insert(i);
					long long int temp = c;
					temp = c/i;
					st.insert(temp);
				}
			}
			st.insert(c);
			for(set<long long int>::iterator it=st.begin();it!=st.end();it++)if(*it > r)cout<<" "<<*it;
			cout<<endl;
			st.clear();
		}
		
	}
	return 0;
}
