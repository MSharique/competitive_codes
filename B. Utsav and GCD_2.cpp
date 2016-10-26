#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

vector<int> vec;
set<int> st;

int main()
{
	int t,n,cnt;
/*	cin>>t;
	while(t--)
	{*/
		cin>>n;
		for(int i=0;i<n;i++)cin>>cnt , vec.push_back(cnt);
		vector<int> :: iterator it;
		it = unique(vec.begin() , vec.end());
		vec.resize(distance(vec.begin() , it) );
		cnt = vec.size();
		for(int i=0;i<cnt;i++)
		{
			for(int j=i+1;j<cnt;j++)
			{
				int temp  = __gcd(vec[i],vec[j]);
				st.insert(temp);
			}
		}
		cout<<st.size()<<endl;
	vec.clear();
	st.clear();
//	}
	return 0;
}
