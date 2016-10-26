#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<utility>
using namespace std;

pair<int,int> black_king;
pair<int,int> white_king;
char chess[8][8];
    
int black_pawn(int pi,int pj,int ki,int kj)
{
	if(pi+1 == ki && pj-1 == kj)return 1;
	if(pi+1 == ki && pj+1 == kj)return 1;
	return 0;
}

int white_pawn(int pi,int pj,int ki,int kj)
{
//	cout<<"\n white pawn is at : ("<<pi<<" , "<<pj<<" ) and vlack king at : ( "<<ki<<" , "<<kj<<" )\n";
	if(pi-1 == ki && pj-1 == kj)return 1;
	if(pi-1 == ki && pj+1 == kj)return 1;
	return 0;
}

int rook(int ri,int rj,int ki,int kj)
{
//	cout<<"\n root coordinates : ( "<<ri<<" , "<<rj<<" )\n";
	if(ri == ki)
	{
		for(int i=rj-1;i>=0;i--)
		{
			if(chess[ri][i]!='.')
			{
				if(i == kj)return 1;
				else break;
			}
		}
		
		for(int i=rj+1;i<8;i++)
		{
			if(chess[ri][i]!='.')
			{
				if(i == kj)return 1;
				else break;
			}
		}
	}
	
	if(rj == kj)
	{
		for(int i=ri-1;i>=0;i--)
		{
			if(chess[i][rj]!='.')
			{
				if(i == ki)return 1;
				else break;
			}
		}
		
		for(int i=ri+1;i<8;i++)
		{
//			cout<<chess[i][rj]<<endl;
			if(chess[i][rj]!='.')
			{
				if(i == ki)return 1;
				else break;
			}
		}
		
	}
	return 0;
}

int bishop(int bi,int bj,int ki,int kj)
{
	//case1 : i+1 , j+1
	for(int i=bi+1,j=bj+1;i<8 && j<8;i++,j++)
	{
		if(chess[i][j] != '.')
		{
			if(i==ki && j==kj)return 1;
			else break;
		}
	}
	
	//case2 : i+1 , j-1
	for(int i=bi+1,j=bj-1;i<8 && j>=0;i++,j--)
	{
		if(chess[i][j] != '.')
		{
			if(i==ki && j==kj)return 1;
			else break;
		}
	}
	
	//case 3 : i-1 , j+1
	for(int i=bi-1,j=bj+1;i>=0 && j<8;i--,j++)
	{
		if(chess[i][j] != '.')
		{
			if(i==ki && j==kj)return 1;
			else break;
		}
	}
	
	//case 4 : i-1 , j-1
	for(int i=bi-1,j=bj-1;i>=0 && j>=0;i--,j--)
	{
		if(chess[i][j] != '.')
		{
			if(i==ki && j==kj)return 1;
			else break;
		}
	}
	return 0;
}

int queen(int qi,int qj,int ki,int kj)
{
	int temp =0, temp1 = 0;
	temp = rook(qi,qj,ki,kj);
	temp1 = bishop(qi,qj,ki,kj);
	return temp | temp1 ;
}

int knight(int ni,int nj,int ki,int kj)
{
	if(nj-2 >= 0 )
	{
		if(nj-2 == kj && ni+1 == ki)return 1;
		if(nj-2 == kj && ni-1 == ki)return 1;
	}
	if(nj+2 < 8)
	{
		if(nj+2 == kj && ni+1==ki)return 1;
		if(nj+2 == kj && ni-1==ki)return 1;
	}
	if( ni + 2 < 8)
	{
		if(ni+2 == ki && nj+1 == kj)return 1;
		if(ni+2 == ki && nj-1 == kj)return 1;
	}
	if( ni-2 >=0 )
	{
		if(ni-2 == ki && nj+1 == kj)return 1;
		if(ni-2 == ki && nj-1 == kj)return 1;
		
	}
	return 0;
}


int main()
{
	//ifstream f1("input.in");
	//ofstream f2("output.out");
    int c=1,t,check_bk=0,check_wk=0,cnt_dot=0;
    //f1>>t;
    string str;
    while(cnt_dot!=64)
    {
    	cnt_dot = 0;
    	check_wk = 0;
    	check_bk = 0;
               for(int i=0;i<8;i++)
               {
               		cin>>str;
               	//	f1>>str;
               	//	cout<<"str : "<<str<<endl;
               		for(int j=0;j<8;j++)
					   {
					   	chess[i][j] = str[j];
					 	if(chess[i][j]=='k')black_king.first = i , black_king.second = j;
				   		if(chess[i][j]=='K')white_king.first = i , white_king.second = j;
				   	    if(str[j]=='.')cnt_dot++;	
					   }
               }
               if(cnt_dot!=64)
               {
               		/*
					for(int i=0;i<8;i++)
					{
					   	for(int j=0;j<8;j++)
					   	{
					   		cout<<chess[i][j];
					   		f2<<chess[i][j];
					   	}
					   	cout<<endl;
					  	f2<<endl;
					}
					*/
				/*	
					if(c==67)
					{
						cout<<"debug case 67 \n";
						cout<<"chess board :\n";
						for(int i=0;i<8;i++)
						{
							for(int j=0;j<8;j++)
							{
								cout<<chess[i][j];
							}
							cout<<endl;
						}
						
						cout<<"\n black king @ ("<<black_king.first<<" , "<<black_king.second<<endl;
						cout<<"\n WHITE king @ ("<<white_king.first<<" , "<<white_king.second<<endl;
					}
				*/	for(int i=0;i<8;i++)
					{
						for(int j=0;j<8;j++)
						{
							if(chess[i][j]=='p')check_wk |= black_pawn(i,j,white_king.first,white_king.second);
							if(chess[i][j]=='n')check_wk |= knight(i,j,white_king.first,white_king.second);
							if(chess[i][j]=='b')check_wk |= bishop(i,j,white_king.first,white_king.second);
							if(chess[i][j]=='r')check_wk |= rook(i,j,white_king.first,white_king.second);
							if(chess[i][j]=='q')check_wk |= queen(i,j,white_king.first,white_king.second);
							if(chess[i][j]=='P')check_bk |= white_pawn(i,j,black_king.first,black_king.second);
							if(chess[i][j]=='N')check_bk |= knight(i,j,black_king.first,black_king.second);
							if(chess[i][j]=='B')check_bk |= bishop(i,j,black_king.first,black_king.second);
							if(chess[i][j]=='R')check_bk |= rook(i,j,black_king.first,black_king.second);
							if(chess[i][j]=='Q')check_bk |= queen(i,j,black_king.first,black_king.second);
							
							if(check_wk | check_bk)break;
						}
					}
							cout<<"Game #"<<c++<<": ";
               		//		f2<<"Game #"<<c++<<": ";
              
							if(check_wk==0 && check_bk==0)
							{
								cout<<"no king is in check.\n";
					//			f2<<"no king is in check.\n";
							}
							if(check_wk==0 && check_bk==1)
							{
								cout<<"black king is in check.\n";
					//			f2<<"black king is in check.\n";
							}
							if(check_wk==1 && check_bk==0)
							{
								cout<<"white king is in check.\n";
					//			f2<<"white king is in check.\n";
							}
					
               }
    }
    //f1.close();
    //f2.close();
    return 0;
    }
