#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
//#include<fstream>
using namespace std;

bool bingo[5][5];
int arr[5][5];
bool num_present[76];

int find_row(int col,int num)
{
	for(int i=0;i<5;i++)
	{
		if(arr[i][col] == num)return i;
	}
	return -1;
}

bool isbingo()
{
	//check rows
	bool check;
	for(int i=0;i<5;i++)
	{
		check = true;
		for(int j=0;j<5;j++)
		{
			if(!bingo[i][j])
			{
				check = false;
				break;
			}
		}
		if(check)return true;
	}
	
	//check col
	for(int i=0;i<5;i++)
	{
		check = true;
		for(int j=0;j<5;j++)
		{
			if(!bingo[j][i])
			{
				check = false;
				break;
			}
		}
		if(check)return true;
	}
	
	//check principle diagonal
	check = true;
	for(int i=0;i<5;i++)
	{
		if(!bingo[i][i])
		{
			check = false;
			break;
		}
	}
	if(check)return true;
	
	//check other diagonal
	check = true;
	for(int i=0,j=4;i<5;i++,j--)
	{
		if(!bingo[i][j])
		{
			check = false;
			break;
		}
	}
	if(check)return true;
	
	//final
	return false;
}

int main()
{
//	ofstream f1;
//	f1.open("output.out");
	int t,ans;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)bingo[i][j] = false;
		}
		for(int i=0;i<76;i++)num_present[i] = false;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>arr[i][j];
				num_present[arr[i][j]] = true;
			}
		}
		cin>>arr[2][0]>>arr[2][1]>>arr[2][3]>>arr[2][4];
		num_present[arr[2][0]] = true;
		num_present[arr[2][1]] = true;
		num_present[arr[2][3]] = true;
		num_present[arr[2][4]] = true;
		for(int i=3;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				cin>>arr[i][j];
				num_present[arr[i][j]] = true;
			}
		}
		bingo[2][2] = true;
		arr[2][2] = 0;
		int it,temp,row,col;
		bool game_end = false;
		for(it=1;it<=75;it++)
		{
			cin>>temp;
			if(!game_end)
			{
				if(num_present[temp])
				{
					if(temp<=15)
					{
						col = 0;
						row = find_row(col,temp);
					}
					else if(temp<=30)
					{
						col = 1;
						row = find_row(col,temp);
					}
					else if(temp<=45)
					{
						col = 2;
						row = find_row(col,temp);
					}
					else if(temp<=60)
					{
						col = 3;
						row = find_row(col,temp);
					}
					else
					{
						col = 4;
						row = find_row(col,temp);
					}
					bingo[row][col] = true;
					if(isbingo())
					{
						game_end = true;
						ans = it;
				//		break;
					}
				}	
			}
			
		}
		if(game_end)
		{
			cout<<"BINGO after "<<ans<<" numbers announced"<<endl;
//			f1<<"BINGO after "<<ans<<" numbers announced"<<endl;
		}
	}
//	f1.close();
	return 0;
}
