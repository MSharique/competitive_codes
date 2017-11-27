#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);
	int key ;
	cin>>key;
	cout<<"str : "<<str<<" ,key = "<<key<<endl;
	for(int i=0;i<str.length();i++)
	{
	if(i%2==0)
		{str[i] = (char)(str[i]+key);}
	else
	{str[i] = (char)(str[i]-key);}
	}
	cout<<"encrypt : "<<str<<endl;
	
for(int i=0;i<str.length();i++)
	{
	if(i%2==0)
		{str[i] = (char)(str[i]-key);}
	else
	{str[i] = (char)(str[i]+key);}
	}
	cout<<"decrypt : "<<str<<endl;
	return 0;
}
