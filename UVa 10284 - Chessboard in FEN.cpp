#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

vector<string> vec;
char chess[8][8];
bool check[8][8];

void black_pawn(int pi,int pj)
{
	check[pi][pj] = false;
	if(pi + 1 < 8)
	{
		if(pj-1 >=0)check[pi+1][pj-1] = false;
		if(pj+1 <8)check[pi+1][pj+1] = false;
	}
}

void white_pawn(int pi,int pj)
{
	check[pi][pj] = false;
	if(pi - 1 >= 0)
	{
		if(pj-1 >=0)check[pi-1][pj-1] = false;
		if(pj+1 <8)check[pi-1][pj+1] = false;
	}
}

void knight(int ni,int nj)
{
	check[ni][nj] = false;
	if( ni - 2 >= 0)
	{
		if(nj+1 <8)check[ni-2][nj+1] = false;
		if(nj-1 >=0)check[ni-2][nj-1] = false;
	}
	if(ni +2 <8)
	{
		if(nj+1 <8)check[ni+2][nj+1] = false;
		if(nj-1 >= 0)check[ni+2][nj-1] = false;
	}
	
	if( nj-2 >=0)
	{
		if(ni+1 < 8)check[ni+1][nj-2] = false;
		if(ni-1 >=0)check[ni-1][nj-2] = false;
	}
	if(nj+2 >8)
	{
		if(ni+1 < 8)check[ni+1][nj+2] = false;
		if(ni-1 >=0)check[ni-1][nj+2] = false;
	}
}

void bishop(int bi,int bj)
{
	check[bi][bj] = false;
	for(int i=bi+1,j=bj+1;i<8 && j<8;i++,j++)
	{
		if(chess[i][j]!='.')break;
		check[i][j] = false;
	}	
	for(int i=bi+1,j=bj-1;i<8 && j>=0;i++,j--)
	{
		if(chess[i][j]!='.')break;
		check[i][j] = false;
	}
	for(int i=bi-1,j=bj+1;i>=0 && j<8;i--,j++)
	{
		if(chess[i][j]!='.')break;
		check[i][j] = false;
	}
	for(int i=bi-1,j=bj-1;i>=0 && j>=0;i--,j--)
	{
		if(chess[i][j] != '.')break;
		check[i][j] = false;
	}
}

void rook(int ri,int rj)
{
	check[ri][rj] = false;
	for(int i=ri-1;i>=0;i--)
	{
		if(chess[i][rj]!='.')break;
		check[i][rj] = false;
	}
	for(int i=ri+1;i<8;i++)
	{
		if(chess[i][rj]!='.')break;
		check[i][rj] = false;
	}
	for(int i=rj-1;i>=0;i--)
	{
		if(chess[ri][i]!='.')break;
		check[ri][i] = false;
	}
	for(int i=rj+1;i<8;i++)
	{
		if(chess[ri][i]!='.')break;
		check[ri][i] = false;
	}
}

void queen(int qi,int qj)
{
	check[qi][qj] = false;
	rook(qi,qj);
	bishop(qi,qj);	
}

void king(int ki,int kj)
{
	check[ki][kj] = false;
	if(kj+1 < 8)check[ki][kj+1] =false;
	if(ki-1 >=0 && kj+1 < 8)check[ki-1][kj+1] = false;
	if(ki-1 >=0)check[ki-1][kj] = false;
	if(ki-1 >=0 && kj-1>=0)check[ki-1][kj-1] = false;
	if(kj-1 >=0)check[ki][kj-1] = false;
	if(ki+1 <8 && kj-1>=0)check[ki+1][kj-1] = false;
	if(ki+1 <8 )check[ki+1][kj] = false;
	if(ki+1 <8 && kj+1<8)check[ki+1][kj+1] = false;
}

int main()
{
	//ifstream f1;
    //ofstream f2;
    //f1.open("input.in");
    //f2.open("output.out");
	string str,temp;
	while(cin>>str)
	//while(f1>>str)
	{	
		//initialise
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				chess[i][j] = '.';
				check[i][j] = true;
			}
		}
		
		//cout<<"\n input string : "<<str<<endl;
		int len = str.length();
		//cout<<"\n With length : "<<len<<endl;
		for(int i=0;i<len;i++)
		{
			temp = "";
			while(str[i]!='/' && i<len)
			{
				temp += str[i++];
			}
			vec.push_back(temp);
		}
		//cout<<"\n all 8 rows in coded form :\n";
		//for(int i=0;i<vec.size();i++)cout<<vec[i]<<endl;
		
		for(int i=0;i<8;i++)
		{
			int  k = 0;
			for(int j=0;j<vec[i].length();j++)
			{
				if(isdigit(vec[i][j]))
				{
					int temp = vec[i][j] - '0';
					while(temp--)chess[i][k++] = '.';
				}
				else chess[i][k++] = vec[i][j];
			}
		}
		/*
		cout<<"\n chess board config. \n";
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cout<<chess[i][j];
			}
			cout<<endl;
		}
		*/
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(chess[i][j]=='p')black_pawn(i,j);
				if(chess[i][j]=='n')knight(i,j);
				if(chess[i][j]=='b')bishop(i,j);
				if(chess[i][j]=='q')queen(i,j);
				if(chess[i][j]=='r')rook(i,j);
				if(chess[i][j]=='k')king(i,j);
				
				if(chess[i][j]=='P')white_pawn(i,j);
				if(chess[i][j]=='N')knight(i,j);
				if(chess[i][j]=='B')bishop(i,j);
				if(chess[i][j]=='Q')queen(i,j);
				if(chess[i][j]=='R')rook(i,j);
				if(chess[i][j]=='K')king(i,j);
				
			}
		}
		
		int free_pos = 0;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(check[i][j])free_pos++;
			}
		}
		cout<<free_pos<<endl;
//		f2<<free_pos<<endl;
		vec.clear();
	}
//	f1.close();
//	f2.close();
	return 0;
}
