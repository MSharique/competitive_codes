#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cctype>
#include<fstream>
using namespace std;

int main()
{
	ifstream f1;
	ofstream f2;
	f1.open("input.in");
	f2.open("output.out");
	string str,temp;
	while(getline(f1,temp))
	{
		str = "";
		cout<<"input : "<<temp<<endl;
		if(temp=="DONE")break;
		int len = temp.length();
		for(int i=0;i<len;i++)
		{
			if(isalpha(temp[i]))str += (char)tolower(temp[i]);
		}
		if(equal(str.begin() , str.begin()+str.size()/2 , str.rbegin()) )
		{
			cout<<"You won't be eaten!\n";
			f2<<"You won't be eaten!\n";
		}
		else 
		{
			cout<<"Uh oh..\n";
			f2<<"Uh oh..\n";
		}
	}
	return 0;
}
