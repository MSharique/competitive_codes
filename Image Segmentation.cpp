#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
#include<utility>
#include<vector>
using namespace std;

bool visit[1001][1001];
int grid[1001][1001]; 
queue<pair<int,int> > q;
vector<int> vec;
int h,w;

bool neighbour(pair<int,int> pr)
{
	if(pr.first < 0 || pr.first >= h || pr.second <0 || pr.second >= w)return false;
	if(!visit[pr.first][pr.second] && grid[pr.first][pr.second]==1)	
	{
		visit[pr.first][pr.second] = 1;
		q.push(pr);
		return true;
	}
	return false;
}


int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>h>>w;
		for(int i=0;i<h;i++)
		{
			cin>>str;
			for(int j=0;j<w;j++)
			{
				if(str[j]=='.')grid[i][j] = 0;
				else grid[i][j] = 1;
			}
		}
		int ans = 0;
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(!visit[i][j])
				{
					if(grid[i][j]==1)
					{
						ans++;
						visit[i][j]= 1;
						q.push(make_pair(i,j));
						int blob_cnt = 1;
						while(!q.empty())
						{
							pair<int,int> temp;
							temp = q.front();
							q.pop();
							if(neighbour(make_pair(temp.first-1,temp.second)))blob_cnt++;
							if(neighbour(make_pair(temp.first-1,temp.second-1)))blob_cnt++;
							if(neighbour(make_pair(temp.first-1,temp.second+1)))blob_cnt++;
							if(neighbour(make_pair(temp.first+1,temp.second)))blob_cnt++;
							if(neighbour(make_pair(temp.first+1,temp.second-1)))blob_cnt++;
							if(neighbour(make_pair(temp.first+1,temp.second+1)))blob_cnt++;
							if(neighbour(make_pair(temp.first,temp.second-1)))blob_cnt++;
							if(neighbour(make_pair(temp.first,temp.second+1)))blob_cnt++;
						}
						vec.push_back(blob_cnt);
					}
				}
			}
		}
		cout<<ans<<endl;
		int len = vec.size();
		sort(vec.begin(),vec.end()); 
		for(int i=0;i<len;i++)cout<<vec[i]<<" ";
		cout<<endl;
		vec.clear();
		//q.clear();
		memset(visit,false,sizeof(visit));
	}
	return 0;
}
