#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

int mines[101][101];
string board[101];
int n,m;

int main()
{
/*	ofstream f1;
	f1.open("output.out");
	
	int cas =1,cnt=0;
	bool first = true;
	while(cin>>n>>m)
	{
		if(n==m && n==0)break;
		if(first)first = false;
		else 
		{
			cout<<endl;
			f1<<endl;
		}
		for(int i=0;i<n;i++)cin>>board[i];
		
		if(n>1)
		{
			//all four corners
			//top-left
			cnt += (board[0][1]=='*') ? 1 : 0 ;
			cnt += (board[1][1]=='*') ? 1 : 0 ;
			cnt += (board[1][0]=='*') ? 1 : 0 ;
			mines[0][0] = cnt;
			cnt = 0;
			//top-right
			cnt += (board[0][m-2]=='*') ? 1 : 0 ;
			cnt += (board[1][m-2]=='*') ? 1 : 0 ;
			cnt += (board[1][m-1]=='*') ? 1 : 0 ;
			mines[0][m-1] = cnt;
			cnt = 0;
			//bottom-right
			cnt += (board[n-2][m-1]=='*') ? 1 : 0 ;
			cnt += (board[n-2][m-2]=='*') ? 1 : 0 ;
			cnt += (board[n-1][m-2]=='*') ? 1 : 0 ;
			mines[n-1][m-1] = cnt;
			cnt = 0;
			//botttom-left
			cnt += (board[n-1][1]=='*') ? 1 : 0 ;
			cnt += (board[n-2][1]=='*') ? 1 : 0 ;
			cnt += (board[n-2][0]=='*') ? 1 : 0 ;
			mines[n-1][0] = cnt;
			cnt = 0;
			
			//five-group section
			//row num -> 0
			for(int j=1;j<m-1;j++)
			{
				cnt += (board[0][j-1]=='*') ? 1 : 0 ;
				cnt += (board[1][j-1]=='*') ? 1 : 0 ;
				cnt += (board[1][j]=='*') ? 1 : 0 ;
				cnt += (board[1][j+1]=='*') ? 1 : 0 ;
				cnt += (board[0][j+1]=='*') ? 1 : 0 ;
				mines[0][j] = cnt;
				cnt = 0;
			}
			//col num -> m-1
			for(int j=1;j<n-1;j++)
			{
				cnt += (board[j-1][m-1]=='*') ? 1 : 0 ;
				cnt += (board[j-1][m-2]=='*') ? 1 : 0 ;
				cnt += (board[j][m-2]=='*') ? 1 : 0 ;
				cnt += (board[j+1][m-2]=='*') ? 1 : 0 ;
				cnt += (board[j+1][m-1]=='*') ? 1 : 0 ;
				mines[j][m-1] = cnt;
				cnt = 0;
			}
			//row num -> n-1
			for(int j=1;j<m-1;j++)
			{
				cnt += (board[n-1][j-1]=='*') ? 1 : 0 ;
				cnt += (board[n-2][j-1]=='*') ? 1 : 0 ;
				cnt += (board[n-2][j]=='*') ? 1 : 0 ;
				cnt += (board[n-2][j+1]=='*') ? 1 : 0 ;
				cnt += (board[n-1][j+1]=='*') ? 1 : 0 ;
				mines[n-1][j] = cnt;
				cnt = 0;
			}
			//col num -> 0
			for(int j=1;j<n-1;j++)
			{
				cnt += (board[j-1][0]=='*') ? 1 : 0 ;
				cnt += (board[j-1][1]=='*') ? 1 : 0 ;
				cnt += (board[j][1]=='*') ? 1 : 0 ;
				cnt += (board[j+1][1]=='*') ? 1 : 0 ;
				cnt += (board[j+1][0]=='*') ? 1 : 0 ;
				mines[j][0] = cnt;
				cnt = 0;
			}
			//remaining i.e. group of 8 
			for(int i=1;i<n-1;i++)
			{
				for(int j=1;j<m-1;j++)
				{
					cnt += (board[i-1][j-1]=='*') ? 1 : 0 ;
					cnt += (board[i-1][j]=='*') ? 1 : 0 ;
					cnt += (board[i-1][j+1]=='*') ? 1 : 0 ;
					cnt += (board[i][j+1]=='*') ? 1 : 0 ;
					cnt += (board[i+1][j+1]=='*') ? 1 : 0 ;
					cnt += (board[i+1][j]=='*') ? 1 : 0 ;
					cnt += (board[i+1][j-1]=='*') ? 1 : 0 ;
					cnt += (board[i][j-1]=='*') ? 1 : 0 ;
					mines[i][j] = cnt;
					cnt = 0;
				}
			}
		}
		else
		{
			if(board[0][1]=='*')mines[0][0] = 1;
			if(board[0][m-2]=='*')mines[0][m-1] = 1;
			cnt = 0;
			for(int i=1;i<m-1;i++)
			{
				cnt += (board[0][i-1]=='*') ? 1 : 0 ;
				cnt += (board[0][i+1]=='*') ? 1 : 0 ;
				mines[0][i] = cnt;
			}
		}
		
		//print result
		f1<<"Field #"<<cas<<":\n";
		cout<<"Field #"<<cas++<<":\n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(board[i][j]=='*')
				{
					f1<<"*";
					cout<<"*";
				}
				else 
				{
					cout<<mines[i][j];
					f1<<mines[i][j];
				}
			}
			cout<<endl;
			f1<<endl;
		}
		
	}
	f1.close();*/
	
	string str[105];
    int m,n,count,cases=1;
    while (scanf("%d%d\n",&m,&n)!=EOF)
    {
          if(!m && !n) break;
          if(cases!=1) cout<<endl;
          for(int i=1;i<=m;i++)
          {
                  getline(cin,str[i]);
                  str[i]='.'+str[i];;
                  str[i].push_back('.');
          }
          string temp="";
          for(int j=0;j<n+2;j++)
          temp.push_back('.');
          str[0]=temp;
          str[m+1]=temp;
          for (int i=1;i<=m;i++)
          {
              for( int j=1;j<=n;j++)
              {
                   count=0;
                   if( str[i][j]!='*')
                   {
                       if(str[i-1][j-1]=='*') count++;
                       if(str[i][j-1]=='*') count++;
                       if(str[i+1][j-1]=='*') count++;
                       if(str[i+1][j]=='*') count++;
                       if(str[i+1][j+1]=='*') count++;
                       if(str[i][j+1]=='*') count++;
                       if(str[i-1][j+1]=='*') count++;
                       if(str[i-1][j]=='*') count++;
                       str[i][j]='0'+count;
                   }
              }
          }
          cout<<"Field #"<<cases++<<":"<<endl;
          for( int i=1;i<=m;i++)
          {
               for(int j=1;j<=n;j++)
                  cout<<str[i][j];
               str[i].clear();
               cout<<endl;
          }
}
	return 0;
}
