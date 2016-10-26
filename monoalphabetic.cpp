#include<iostream>
#include<string>
#include<windows.h>
#include<cstdio>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	string str;
	getline(cin,str);
	//for(int i=0;i<1000000;i++)s[i] = 
	cout<<"str : "<<str<<endl;
	string plain = str;
	for(int i=0;i<str.length();i++)str[i] = (char)(str[i]+rand()%256);
	cout<<"encrypt : "<<str<<endl;
	for(int i=0;i<str.length();i++)
	{
		for(int j=0;j<256;j++)
		{
			char ch;
			for(int j=0;j<256;j++)
			{
				ch = (char)j;
				if(plain[i] == ch)str[i]=ch;
			}
		}
	}
	cout<<"decrypt : "<<str<<endl;
	return 0;
}
