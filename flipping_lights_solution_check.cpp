#include <bits/stdc++.h>
using namespace std;

ofstream f1;
ifstream f2;

int bfs(int x,int n)
{
	vector<bool> vis(1<<n,false);
	queue<int> Q;
	Q.push(x);
	while(Q.size()!=0)
	{
		int y = Q.front();
		if(y==0)
		{
			return 1;
		}
		Q.pop();
		vis[y] = true;
		for(int i=0;i<n;i++)
		{
			int a1;
			a1 = (1<<i);
			if((i+1)<n)
				a1|=(1<<(i+1));
			if((i-1)>=0)
				a1|=(1<<(i-1));
			if(!vis[y^a1])
				Q.push(y^a1);
		}
	}
	return 0;
}

int main()
{
	f1.open("output.out");
	f2.open("input.in");
	int i,t,n;
	//cin>>t;
	f2>>t;
	while(t--)
	{
		//cin>>n;
		f2>>n;
		int x = 0;
		for(i=0;i<n;i++)
		{
			int y;
		//	cin>>y;
			f2>>y;
			if(y)
				x|=(1<<(n-i-1));
		}
		if(bfs(x,n))
		{
				cout<<"YES"<<endl;
				f1<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
			f1<<"NO"<<endl;
		}
	}
	f1.close();
	f2.close();
	return 0;
}
