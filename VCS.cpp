#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<vector>
using namespace std;

vector<int> first;
vector<int> second;
vector<int> vec(300);
		
int main()
{
	int t,n,k,m,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		for(int i=0;i<m;i++)
		{
			cin>>temp;
			first.push_back(temp);
		}
		for(int i=0;i<k;i++)
		{
			cin>>temp;
			second.push_back(temp);
		}
		vector<int> :: iterator it = set_intersection(first.begin(), first.end(),second.begin(),second.end(),vec.begin());
		//cout<<"\n interdection done \n";
		vec.resize(it-vec.begin());
		cout<<vec.size()<<" ";
		//cout<<"\n intersection set : ";
		//for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";cout<<endl;
		vec.clear();
		it = set_union(first.begin(),first.end(),second.begin(),second.end(),vec.begin());
		vec.resize(it-vec.begin());
		//cout<<"\n uniom set : ";
		//for(int i=0;i<vec1.size();i++)cout<<vec1[i]<<" ";cout<<endl;
		cout<<n-vec.size()<<endl;
		vec.clear();
		first.clear();
		second.clear();
	}
	return 0;
}
