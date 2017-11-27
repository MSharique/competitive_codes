#include<bits/stdc++.h>
using namespace std;
bool arr[1003][1003];
int vec[1003];
bool avail[1003];

void init(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)arr[i][j] = true;
		arr[i][i] = false;
		avail[i] = true;
	}
}

bool check(int src,int n)
{
	for(int i=0;i<n;i++)vec[i] = -1;
    vec[src] = 1;
    avail[src] = false;
    queue <int> q;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        avail[u] = false;
		q.pop();
        for (int v = 0; v < n; ++v)
        {
            if (arr[u][v] && vec[v] == -1)
            {
                vec[v] = 1 + vec[u];
                vec[v] = vec[v]%2;
                q.push(v);
            }
            else if (arr[u][v] && vec[v] == vec[u])
                return false;
        }
    }
    return true;
}

int main()
{
	int t,n,m,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		init(n);
		for(int i=0;i<m;i++)
		{
			scanf("%d%d",&a,&b);
			a--;b--;
			arr[a][b] = false;
			arr[b][a] = false;
	//		deg[a]++;
	//		deg[b]++;
	//		arr[a][a] = false;
	//		arr[b][b] = false;
		}
		
	/*	int mn = 10000,pos;
		for(int i=0;i<n;i++)
		{
			if(deg[i] < mn)
			{
				mn = deg[i];
				pos = i;
			}
		}
	*/	
	/*	cout<<"\n Graph : \n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)cout<<arr[i][j]<<" ";
			cout<<endl; 
		}
	*/	bool yes = true;
		for(int i=0;i<n;i++)
		{
			if(avail[i])
			{
				if(!check(i,n))
				{
					yes = false;
					break;
				}	
			}	
		}
		if(yes)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
