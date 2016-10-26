#include<iostream>
#include<cstdio>
#include<cctype>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch;
		ch = tolower(ch);
		switch(ch)
		{
			case 'b' : cout<<"BattleShip\n";break;
			case 'c' : cout<<"Cruiser\n";break;
			case 'd' : cout<<"Destroyer\n";break;
			case 'f' : cout<<"Frigate\n";break;
			default : break;
		}
		
	}
	return 0;
}
