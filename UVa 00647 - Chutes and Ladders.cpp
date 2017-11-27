#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int input[1003];
int ladder[101];
bool turn[6];
int mine[101];
int player_pos[6];

int main()
{
	int players,it=0;
	while(cin>>input[it])
	{
		if(input[it]==0)break;
		it++;
	}
	while(cin>>players)
	{
		cin>>players;
		
		if(players==0)break;
		
		//initialose players
		for(int i=0;i<players;i++)turn[i] = true;
		
		// initialise ladder
		for(int i=0;i<=100;i++)ladder[i] = 0;
		int temp1,temp2;
		while(cin>>temp1>>temp2)
		{
			if(temp1==temp2 && temp1==0)break;
			if(temp1<temp2)ladder[temp1] += (temp2-temp1);
			else ladder[temp1] -= (temp1-temp2); 
		}
		//initialise mines
		for(int i=0;i<=100;i++)mine[i] = 0;
		while(cin>>temp1)
		{
			if(temp1==0)break;
			if(temp1<0)mine[abs(temp1)] = -1;
			else mine[abs(temp1)] = +1;	
		}	
		
		int it = 0,player=0;
		while(input[it]!=0)
		{
			if(turn[player])
			{
				player_pos[player] += input[it];
				if(player_pos[player] == 100)break;
				if(player_pos[player] > 100)player_pos[player] -= input[it];
				if(mine[player_pos[player]] <0)turn[player] = false;
				else 
				{
					player--;
					player = player%players;
					if(player < 0)player += players;
				}
				player = (player+1)%players;	
			}
			else 
			{
				player = (player+1)%players;
			}
		}
		cout<<player+1<<endl;
	}
	return 0;
}
