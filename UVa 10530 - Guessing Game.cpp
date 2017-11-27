#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

bool arr[11];

int main()
{
	int num;
	string str1,str2;
	for(int i=1;i<11;i++)arr[i] = true;	
	while(cin>>num)
	{
		if(num==0)break;
		cin>>str1>>str2;
		if(str1[0]=='r')
		{
			if(arr[num])cout<<"Stan may be honest\n";
			else cout<<"Stan is dishonest\n"; 
			for(int i=1;i<11;i++)arr[i] = true;
		}
		else
		{
			if(str2[0]=='h')
			{
				for(int i=num;i<11;i++)arr[i]= false;
			}
			else
				for(int i=num;i>0;i--)arr[i] = false;
		}
	}
	return 0;
}
