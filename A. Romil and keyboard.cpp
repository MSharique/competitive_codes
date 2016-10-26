#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	string str;
/*	cin>>t;
	while(t--)
	{*/
		cin>>str;
		int len = str.size();
		for(int i=0;i<len;i++)
		{
			if(str[i]=='a')cout<<"z";
			else cout<<(char)--str[i];
		}
	/*	cout<<endl;
	}*/
	return 0;
}
