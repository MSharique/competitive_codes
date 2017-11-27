#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

int arr[3003];
bool check[3003];

int main()
{
	ofstream f1;
	f1.open("output.out");
	int num;
	bool flag = false;
	while(cin>>num)
	{
		for(int i=0;i<num;i++)cin>>arr[i];
		for(int i=0;i<num;i++)check[i] = true;
		flag = true;
		for(int i=1;i<num;i++)
		{
			int temp = abs(arr[i]-arr[i-1]);
			check[temp] = false;
		}
		for(int i=1;i<num;i++)
		{
			if(check[i])
			{
				flag= false;
				break;
			}
		}
		if(flag)
		{
			cout<<"Jolly\n";
			f1<<"Jolly\n";
		}
		else 
		{
			cout<<"Not jolly\n";
			f1<<"Not jolly\n";
		}
	}
	f1.close();
	return 0;	
}
