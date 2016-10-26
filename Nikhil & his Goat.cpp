#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <queue>

using namespace std;

int r, c;
char mp[755][755];
int dis[755][755];


int start_bfs(int x, int y){
    int ct = 1;  queue < pair<int,int> > q;  q.push(make_pair(x,y)); dis[x][y] = 1;
    while(!q.empty()){
        pair<int,int> p = q.front(); q.pop(); int cx = p.first; int cy = p.second;
        for(int dx=-1; dx<=1; ++dx) for(int dy=-1; dy<=1; ++dy){
            int nx = cx+dx; int ny = cy+dy;
            if(nx<0 || nx >=r || ny<0 || ny>=c) continue;
            if(dis[nx][ny] || mp[nx][ny] == '*') continue;
            dis[nx][ny] = 1;  ++ct; q.push(make_pair(nx, ny));
        }
    }
    return ct;
}

int main(){
   scanf("%d%d", &c, &r);
   for(int i=0; i<r; ++i) scanf("%s", mp[i]);
   memset(dis, 0, sizeof(dis));
   int mx = 0;
   for(int i=0; i<r; ++i) 
     for(int j=0; j<c; ++j) 
        if(mp[i][j]=='.' && dis[i][j]==0){
            int cc = start_bfs(i,j); 
            mx = max(mx, cc);
        }
   printf("%d\n", mx);
   return 0;
}
