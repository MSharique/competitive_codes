#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<fstream>
using namespace std;

vector<pair<int,string> > across;
vector<pair<int,string> > down;
int pos[11][11];
string puzzle[11];

int main()
{
//	ofstream f1;
//	f1.open("output.out");
	int r,c,cas=1,temp;
	bool first = true;
	while(cin>>r)
	{
		if(r==0)break;
		if(first)first = false;
		else 
		{
			cout<<endl;
			//f1<<endl;
		}
		cin>>c;
		temp = 1;
		for(int i=0;i<r;i++)
		{
			cin>>puzzle[i];
			for(int j=0;j<c;j++)
			{
				if(puzzle[i][j]=='*')pos[i][j] = -1;
				else if(i==0 || j==0)pos[i][j] = temp++;
				else
				{
					if(pos[i][j-1]==-1)pos[i][j] = temp++;
					else if(pos[i-1][j]==-1)pos[i][j] = temp++;
				}
			}
		}
		
/*		cout<<"\n Puzzle : \n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)cout<<puzzle[i][j]<<" ";
			cout<<endl;
		}
		cout<<"\n Position : \n";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)cout<<pos[i][j]<<" ";
			cout<<endl;
		}
*/		string str = "";
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				temp = j;
				str = "";
				bool acc = false;
				while(puzzle[i][temp]!='*' && temp<c)
				{
					str += puzzle[i][temp];
					temp++;
					acc = true;
				}
				if(acc)across.push_back(make_pair(pos[i][j] , str));
				j = temp;
			}
		}
		
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
				temp = j;
				str = "";
				bool acc = false;
				while(puzzle[temp][i]!='*' && temp<r)
				{
					str += puzzle[temp][i];
					temp++;
					acc = true;
				}
				if(acc)down.push_back(make_pair(pos[j][i] , str));
				j = temp;
			}
		}
		sort(down.begin() , down.end());
//		f1<<"puzzle #"<<cas<<":\n";
		cout<<"puzzle #"<<cas++<<":\n";
		cout<<"Across\n";
//		f1<<"Across\n";
		for(int i=0;i<across.size();i++)
		{
			cout<<setw(3)<<across[i].first<<"."<<across[i].second<<endl;
//			f1<<setw(3)<<across[i].first<<"."<<across[i].second<<endl;
		}
		cout<<"Down\n";
//		f1<<"Down\n";
		for(int i=0;i<down.size();i++)
		{
			cout<<setw(3)<<down[i].first<<"."<<down[i].second<<endl;
//			f1<<setw(3)<<down[i].first<<"."<<down[i].second<<endl;
		}
	//	cout<<endl;
	//	f1<<endl;
		across.clear();
		down.clear();
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)pos[i][j] = 0;
		}
	}
//	f1.close();
	return 0;
}
