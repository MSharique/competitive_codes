#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
#include<utility>
#include<climits>
#include<vector>
using namespace std;

int main()
{
	int n,m,bakwas;
	cin>>n>>m;
	char grph[n+1][m+1];
	int dist[n+1][m+1];
	memset(dist,10000000,sizeof(dist));
	bool visit[n+1][m+1];
	memset(visit,false,sizeof(visit));
	struct path
	{
		int x;
		int y;
	}path[n+1][m+1];
	
	vector<pair<int,int> > src;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>grph[i][j];
			if(grph[j][j]=='s')src.push_back(make_pair(i,j));
		}
	}
	cin>>bakwas;
	/*cout<<"\n init grph : \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<grph[i][j]<<" ";		
		}
		cout<<endl;
	}*/
	int src_cnt = src.size();
	for(int k=0;k<src_cnt;k++)
	{	
	//	cout<<"\n in loop \n";
		pair<int,int> temp = src[k];
		queue<pair<int,int> > q;
		q.push(temp);
		dist[temp.first][temp.second] = 0;
		visit[temp.first][temp.second] = 1;
		while(!q.empty())
		{
				//cout<<"\n in quwuw \n";
				pair<int,int> pr = q.front();
				//cout<<"\n pr : "<<pr.first<<" , "<<pr.second<<endl;
				q.pop();
				//1
				if(pr.first-1 >= 0 || pr.first-1 < n || pr.second >=0 || pr.second < m)
				{
					if(!visit[pr.first-1][pr.second] && grph[pr.first-1][pr.second] != 'w' && dist[pr.first-1][pr.second] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first-1][pr.second] = dist[pr.first][pr.second]+1;
						path[pr.first-1][pr.second].x =  pr.first;
						path[pr.first-1][pr.second].y =  pr.second;
						q.push(make_pair(pr.first-1,pr.second));
					}	
				}
				//2
				if(pr.first-1 >= 0 || pr.first-1 < n || pr.second-1 >=0 || pr.second-1 < m)
				{
					if(!visit[pr.first-1][pr.second-1] && grph[pr.first-1][pr.second-1] != 'w' && dist[pr.first-1][pr.second-1] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first-1][pr.second-1] = dist[pr.first][pr.second]+1;
						path[pr.first-1][pr.second-1].x =  pr.first;
						path[pr.first-1][pr.second-1].y =  pr.second;
						q.push(make_pair(pr.first-1,pr.second-1));
					}	
				}
				//3
				if(pr.first-1 >= 0 || pr.first-1 < n || pr.second+1 >=0 || pr.second+1 < m)
				{
					if(!visit[pr.first-1][pr.second+1] && grph[pr.first-1][pr.second+1] != 'w' && dist[pr.first-1][pr.second+1] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first-1][pr.second+1] = dist[pr.first][pr.second]+1;
						path[pr.first-1][pr.second+1].x =  pr.first;
						path[pr.first-1][pr.second+1].y =  pr.second;
						q.push(make_pair(pr.first-1,pr.second+1));
					}	
				}
				//4
				if(pr.first+1 >= 0 || pr.first+1 < n || pr.second >=0 || pr.second < m)
				{
					if(!visit[pr.first+1][pr.second] && grph[pr.first+1][pr.second] != 'w' && dist[pr.first+1][pr.second] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first+1][pr.second] = dist[pr.first][pr.second]+1;
						path[pr.first+1][pr.second].x =  pr.first;
						path[pr.first+1][pr.second].y =  pr.second;
						q.push(make_pair(pr.first+1,pr.second));
					}	
				}
				//5
				if(pr.first+1 >= 0 || pr.first+1 < n || pr.second-1 >=0 || pr.second-1 < m)
				{
					if(!visit[pr.first+1][pr.second-1] && grph[pr.first+1][pr.second-1] != 'w' && dist[pr.first+1][pr.second-1] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first+1][pr.second-1] = dist[pr.first][pr.second]+1;
						path[pr.first+1][pr.second-1].x =  pr.first;
						path[pr.first+1][pr.second-1].y =  pr.second;
						q.push(make_pair(pr.first+1,pr.second-1));
					}	
				}
				//6
				if(pr.first+1 >= 0 || pr.first+1 < n || pr.second+1 >=0 || pr.second+1 < m)
				{
					if(!visit[pr.first+1][pr.second+1] && grph[pr.first+1][pr.second+1] != 'w' && dist[pr.first+1][pr.second+1] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first+1][pr.second+1] = dist[pr.first][pr.second]+1;
						path[pr.first+1][pr.second+1].x =  pr.first;
						path[pr.first+1][pr.second+1].y =  pr.second;
						q.push(make_pair(pr.first+1,pr.second+1));
					}	
				}
				//7
				if(pr.first >= 0 || pr.first < n || pr.second-1 >=0 || pr.second-1 < m)
				{	
					//cout<<"\n 7 \n"<<visit[pr.first][pr.second-1]<<" , "<<grph[pr.first][pr.second-1]<<" , "<<dist[pr.first][pr.second-1]<<endl;
					if((!visit[pr.first][pr.second-1] && grph[pr.first][pr.second-1] != 'w') && dist[pr.first][pr.second-1] > dist[pr.first][pr.second]+1)
					{
	//					cout<<"\n cns tr\n";
						dist[pr.first][pr.second-1] = dist[pr.first][pr.second]+1;
						path[pr.first][pr.second-1].x =  pr.first;
						path[pr.first][pr.second-1].y =  pr.second;
						q.push(make_pair(pr.first,pr.second-1));
					}	
				}
				//8
				if(pr.first >= 0 || pr.first < n || pr.second+1 >=0 || pr.second+1 < m)
				{
					if(!visit[pr.first][pr.second+1]  && grph[pr.first][pr.second+1] != 'w' && dist[pr.first][pr.second+1] > dist[pr.first][pr.second]+1)
					{
						dist[pr.first][pr.second+1] = dist[pr.first][pr.second]+1;
						path[pr.first][pr.second+1].x =  pr.first;
						path[pr.first][pr.second+1].y =  pr.second;
						q.push(make_pair(pr.first,pr.second+1));
					}	
				}
			visit[pr.first][pr.second] = 1;	
		}
		char out[n+1][m+1];
		int d_x,d_y;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				out[i][j] = grph[i][j];
				if(out[i][j]=='s')out[i][j]='-';
				if(out[i][j]=='d')d_x = i , d_y = j;
			}
		}
		out[temp.first][temp.second] = (char)(k+'a');
		d_x = path[d_x]->x;
		d_y = path[d_y]->y;
		while((d_x != temp.first) && (d_y != temp.second))	
		{
				out[d_x][d_y] = (char)(k+'a');
			d_x = path[d_x]->x;
			d_y = path[d_y]->y;
		}
		cout<<"\n final output : \n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<out[i][j]<<" ";		
			}
			cout<<endl;
		}
	
	}
	return 0;
}
