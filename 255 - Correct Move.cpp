#include<bits/stdc++.h>
using namespace std;

int chess[8][8];
int king[4][2] = {0,1,0,-1,-1,0,1,0};

int main()
{
	int king_pos, queen, queen_next, row, col;
	while (cin>>king_pos>>queen>>queen_next) 
	{
		if (king_pos == queen)cout<<"Illegal state\n";
		else 
		{
			for (int i = 0; i < 8;i++)
				for (int j = 0; j < 8;j++)
					chess[i][j] = 0;
			for (int i = 0; i < 4; ++ i)
			{
				row = (king_pos/8)+(king[i][0]);
				col = (king_pos%8)+king[i][1];
				if (row >= 0 && row < 8 && col >= 0 && col < 8)
					chess[row][col] = chess[row][col] + 1;
				row = (queen/8)+king[i][0];
				col = (queen%8)+king[i][1]; 
				while (row >= 0 && row < 8 && col >= 0 && col < 8 && row*8+col != king_pos)
				{
					chess[row][col] = chess[row][col]+2;
					row = row+king[i][0];
					col = col+king[i][1]; 
				}
			}
			if (chess[queen_next/8][queen_next%8] < 2)cout<<"Illegal move\n";
			else if (chess[queen_next/8][queen_next%8] == 3)cout<<"Move not allowed\n";
			else if (king_pos == 0 && queen_next == 9 || king_pos == 7 && queen_next == 14 || king_pos == 56 && queen_next == 49 || king_pos == 63 && queen_next == 54)
				cout<<"Stop\n";
			else cout<<"Continue\n";
		}
	}
    return 0;
}


