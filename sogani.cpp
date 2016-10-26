#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<ctime>
using namespace std;

bool dig[10];
struct node
{
	string mynum;
	int arr[4][10];
};

/**************************************************
1 ===>	not visited
2 ===>  not present in number
3 ===>  not correct location
4 ===>  correct
5 ===> skip this
******************************************/
node player1;
node player2;

int main()
{
	srand(time(NULL));
	for(int i=0;i<10;i++)dig[i] = 0;
	int cnt = 0;
	player1.mynum = "";
	while(cnt<4)
	{
		int temp = rand()%10;
		if(!dig[temp])
		{
			player1.mynum += (char)(temp + '0'); 
			dig[temp] = 1;
			cnt++;
		}
	}
	cout<<"\n --	computer num = "<<player1.mynum<<endl;
	
	cout<<"\n guess your distinct 4 digits :-) \n";
	char ch;
	do
	{
		
		cout<<"\n cont....(hit 'y') : ";
		cin>>ch;
	}while(ch=='y');
	return 0;
}
