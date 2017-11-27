#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<bitset>
#include<map>
using namespace std;

vector<vector< bitset<100001> > > vec(100001);
int cupid[100001];
vector<bool> visit(100001);
int main()
{
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>cupid[i];
		visit[cupid[i]] = false;
	}

	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		//cout<<"cupid type for a = "<<a-1<<" is "<<cupid[a-1]<<" & for b = "<<b-1<<" is "<<cupid[b-1]<<endl;
		if(cupid[a-1]==cupid[b-1])
		{
			int len = vec[cupid[a-1]].size();
			//cout<<"\n len = "<<len<<endl;
			if(len!=0)
			{
				for(int j=0;j<len;j++)
				{
					//cout<<"\n\n bitset count before : "<<vec[cupid[a-1]][j].count()<<" , bitset === "<<vec[cupid[a-1]][j]<<endl;
					if(vec[cupid[a-1]][j].test(a-1) || vec[cupid[b-1]][j].test(b-1))
					{
						vec[cupid[a-1]][j].set(a-1,1);
						vec[cupid[a-1]][j].set(b-1,1);
					}
					else
					{
						bitset<100001> temp;
						temp.set(a-1,1);
						temp.set(b-1,1);
						vec[cupid[a-1]].push_back(temp);
					}
					//cout<<"\n\n bitset count after : "<<vec[cupid[a-1]][j].count()<<" , bitset === "<<vec[cupid[a-1]][j]<<endl;
				}	
			}
			else
			{
				bitset<100001> temp;
				temp.set(a-1,1);
				temp.set(b-1,1);
				vec[cupid[a-1]].push_back(temp);
			}
		}
	}
	a = 0;
	for(int i=0;i<n;i++)
	{
		a = 0;
		if(visit[cupid[i]]==false)
		{
			for(int j=0;j<vec[cupid[i]].size();j++)
			{
				b = vec[cupid[i]][j].count();
				a = max(a,b-1);
			}	
			cout<<a<<" ";
			visit[cupid[i]] = true;
		}
	}
	visit.clear();
	vec.clear();
	return 0;
}
