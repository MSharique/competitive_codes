#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<cstdlib>
#include<cctype>
#include<fstream>
using namespace std;

char board[5][5];

int main()
{
	ofstream f1;
	f1.open("output.out");
	bool valid = true;
	string str[5],temp;
	int spacex,spacey,spacecnt,cas=1;
	while(true)
	{
		getline(cin,str[0]);
		if(str[0].length()==1 and str[0][0]=='Z')break;
		getline(cin,str[1]);
		getline(cin,str[2]);
		getline(cin,str[3]);
		getline(cin,str[4]);
		
		for(int i=0;i<5;i++)
		{
			if(str[i].length()==4)str[i][4] = ' ';
		}
		
		spacecnt = 0;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				board[i][j] = str[i][j];
				if(board[i][j]==' ')
				{
					spacex = i;
					spacey = j;
					spacecnt++;
				}
			}
		}
		/*
		cout<<"BoARD initial config\n";
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		*/
		if(spacecnt>1)
		{
			f1<<"Puzzle #"<<cas<<":\nThis puzzle has no final configuration.\n\n";
			cout<<"Puzzle #"<<cas++<<":\nThis puzzle has no final configuration.\n\n";
			continue;
		}
		
		bool eoquery = false;
		valid = true;
		while(getline(cin,temp))
		{
			int len = temp.length();
			for(int i=0;i<len;i++)
			{
			//	cout<<"\n space coordinates : ("<<spacex<<" , "<<spacey<<" )\n";
				if(temp[i]=='A')
				{
					if(spacex==0)
					{
						valid = false;
						break;
					}
					else
					{
						board[spacex][spacey] = board[spacex-1][spacey];
						board[spacex-1][spacey] = ' ';
						spacex--;
					}
				}
				else if(temp[i]=='B')
				{
					if(spacex==4)
					{
						valid = false;
						break;
					}
					else
					{
						board[spacex][spacey] = board[spacex+1][spacey];
						board[spacex+1][spacey] = ' ';
						spacex++;
					}
				}
				else if(temp[i]=='L')
				{
					if(spacey==0)
					{
						valid = false;
						break;
					}
					else
					{
						board[spacex][spacey] = board[spacex][spacey-1];
						board[spacex][spacey-1] = ' ';
						spacey--;
					}
				}
				else if(temp[i]=='R')
				{
					if(spacey==4)
					{
						valid = false;
						break;
					}
					else
					{
						board[spacex][spacey] = board[spacex][spacey+1];
						board[spacex][spacey+1] = ' ';
						spacey++;
					}
				}
				else if(temp[i]=='0')
				{
					eoquery = true;
					break;
				}
				else 
				{
					valid = false;
					break;
				}
			}
			if(eoquery)break;
			if(!valid)
			{
				//cout<<"\n Invalid case found\n";
				break;
			}
		}
		f1<<"Puzzle #"<<cas<<":\n";
		cout<<"Puzzle #"<<cas++<<":\n";
		if(valid)
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					cout<<board[i][j]<<" ";
					f1<<board[i][j]<<" ";
				}
				cout<<endl;
				f1<<endl;
			}
			cout<<endl;
			f1<<endl;
		}
		else 
		{
			cout<<"This puzzle has no final configuration.\n\n";
			f1<<"This puzzle has no final configuration.\n\n";
		} 
		
		for(int i=0;i<5;i++)str[i] = "";
	}
	return 0;
}
