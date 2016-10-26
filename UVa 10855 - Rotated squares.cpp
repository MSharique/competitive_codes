#include<iostream>
#include<cstdio>
#include<algorithm>
#include<fstream>
using namespace std;

char text[1001][1001];
char pat[1001][1001];
char temp[1001][1001];
int ans[4];

int main()
{
	int N,n;
	while(cin>>N>>n)
	{
		if(N==0 && n==0)break;
		for(int i=0;i<N;i++)
			for(int j=0;j<N;j++)cin>>text[i][j];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)cin>>pat[i][j];
		for(int i=0;i<4;i++)ans[i] = 0;
		int cnt = 0;
	/*	cout<<"\n text : \n";
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<N;j++)cout<<text[i][j];
			cout<<endl;
		}
	*/	for(int rt =0;rt<4;rt++)
		{
			//matching
			cnt = 0;
			for(int i=0;i<N-n+1;i++)
			{
				for(int j=0;j<N-n+1;j++)
				{
					bool match = true;
					for(int k=0;k<n;k++)
					{
						for(int l=0;l<n;l++)
						{
				//			cout<<"\n matching T("<<j+k<<", "<<i+l<<") with P("<<k<<", "<<l<<")";
							if(text[j+k][i+l]!=pat[k][l])
							{
								match = false;
								break;
							}
						}
						if(!match)
						{
							break;
						}
					}
					if(match)
					{
						ans[rt]++;
				//		cout<<"\t math found wth ans : "<<ans[rt];
					}
				}
			}
			
		//	ans[rt] = cnt;
			//rotate
			if(rt!=3)
			{
				for(int i=0,k=n-1;i<n;i++,k--)
				{
					for(int j=0,l=0;j<n;j++,l++)
					{
						temp[l][k] = pat[i][j];
					}
				}
				for(int i=0;i<n;i++)
				{
					for(int k=0;k<n;k++)pat[i][k] = temp[i][k];
				}
				//cout<<"\n after rotation : \n";
				//for(int i=0;i<n;i++)
				//{
				//	for(int j=0;j<n;j++)cout<<pat[i][j];
				//	cout<<endl;		
				//}
			}
		}
		for(int i=0;i<3;i++)cout<<ans[i]<<" ";cout<<ans[3]<<endl;
	}
	return 0;
}
