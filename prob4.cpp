#include<iostream>
#include<string>
using namespace std;

int arr[10];

int main()
{
	string str;
	cin>>str;
	int len = str.size();
	for(int i=0;i<10;i++)arr[i]=0;
	for(int i=0;i<len;i++)arr[str[i]-'0']++;
	for(int i=0;i<10;i++)
	{
		cout<<"\n "<<i<<" : ";
		while(arr[i]--)cout<<"*";
	}
	return 0;
}
