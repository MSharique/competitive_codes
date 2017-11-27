#include<bits/stdc++.h>
using namespace std;

int arr[11][11];

int main()
{
	int t,n,m,cs=1;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>str;
			for(int j=0;j<n;j++)arr[i][j] = str[j]-'0';
		}
		
		cin>>m;
		while(m--)
		{
			cin>>str;
			if(str[0]=='r')
			{
				int a,b,temp;
				cin>>a>>b;
				a--;b--;
				for(int i=0;i<n;i++)
				{
					temp = arr[a][i];
					arr[a][i] = arr[b][i];
					arr[b][i] = temp; 
				}
			}
			else if(str[0]=='c')
			{
				int a,b,temp;
				cin>>a>>b;
				a--;b--;
				for(int i=0;i<n;i++)
				{
					temp = arr[i][a];
					arr[i][a] = arr[i][b];
					arr[i][b] = temp; 
				}
			}
			else if(str[0]=='i')
			{
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)arr[i][j] =(arr[i][j]+1)%10;
				}
			}
			else if(str[0]=='d')
			{
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						arr[i][j] = (arr[i][j]-1)%10;
						if(arr[i][j] < 0)arr[i][j] += 10;
					}
				}
			}
			else
			{
				int temp;
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<i;j++)
					{
						temp = arr[i][j];
						arr[i][j] = arr[j][i];
						arr[j][i] = temp;
					}
				}
			}
		}
		cout<<"Case #"<<cs++<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)cout<<arr[i][j];
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
