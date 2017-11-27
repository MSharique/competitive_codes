#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

bool device[21];
int cap[21];

int main()
{
	int n,m,c,mx,sum,cs=1;
	while(cin>>n>>m>>c)
	{
		if(n==0 && m==0 && c==0)break;
		sum = 0;
		mx = -1;
		for(int i=0;i<n;i++)cin>>cap[i];
		for(int i=0;i<n;i++)device[i]=false;
		bool blown = false;
		for(int i=0;i<m;i++)
		{
			cin>>n;
			n = n-1;
			if(device[n])
			{
				sum = sum - cap[n];
				mx  = max(mx,sum);
				device[n] = false;
			}
			else
			{
				sum = sum + cap[n];
				mx = max(mx,sum);
				device[n] = true;
			}
			if(sum>c)blown = true;
		}
		cout<<"Sequence "<<cs++<<endl;
		if(blown)
		{
			cout<<"Fuse was blown.\n\n";
		}
		else
		{
			cout<<"Fuse was not blown.\nMaximal power consumption was "<<mx<<" amperes.\n\n";
		}
	}
	return 0;
}
