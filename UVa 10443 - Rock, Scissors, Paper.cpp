#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

char arr[2][1024][1024];

int main()
{
	int t,n,m,k;
    cin>>t;
    while(t--)
	{
		cin>>n>>m>>k;
        while(getchar() != '\n');
        int flag = 0;
        for(int i = 0; i < n; i++)
            gets(arr[0][i]);
        while(k--)
		{
            for(int i = 0; i < n; i++)
			{
                for(int j = 0; j < m; j++)
				{
                    arr[!flag][i][j] = arr[flag][i][j];
                    if(arr[flag][i][j] == 'R')
					{
                        if(i+1 < n && arr[flag][i+1][j] == 'P')
                            arr[!flag][i][j] = 'P';
                        else if(i-1 >= 0 && arr[flag][i-1][j] == 'P')
                            arr[!flag][i][j] = 'P';
                        else if(j+1 < m && arr[flag][i][j+1] == 'P')
                            arr[!flag][i][j] = 'P';
                        else if(j-1 >= 0 && arr[flag][i][j-1] == 'P')
                            arr[!flag][i][j] = 'P';
                    }
                    else if (arr[flag][i][j] == 'P')
					{
                        if(i+1 < n && arr[flag][i+1][j] == 'S')
                            arr[!flag][i][j] = 'S';
                        else if(i-1 >= 0 && arr[flag][i-1][j] == 'S')
                            arr[!flag][i][j] = 'S';
                        else if(j+1 < m && arr[flag][i][j+1] == 'S')
                            arr[!flag][i][j] = 'S';
                        else if(j-1 >= 0 && arr[flag][i][j-1] == 'S')
                            arr[!flag][i][j] = 'S';
                    }
                    else
					{
                        if(i+1 < n && arr[flag][i+1][j] == 'R')
                            arr[!flag][i][j] = 'R';
                        else if(i-1 >= 0 && arr[flag][i-1][j] == 'R')
                            arr[!flag][i][j] = 'R';
                        else if(j+1 < m && arr[flag][i][j+1] == 'R')
                            arr[!flag][i][j] = 'R';
                        else if(j-1 >= 0 && arr[flag][i][j-1] == 'R')
                            arr[!flag][i][j] = 'R';
                    }
                }
            }
            flag = !flag;
        }
        for(int i = 0; i < n; i++)
            arr[flag][i][m] = '\0', puts(arr[flag][i]);
        if(t)puts("");
    }
    return 0;
}
