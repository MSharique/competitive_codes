#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		int len = str.size();
		for(int i=0;i<len;i++)
		{
			int x = str[i]-'a';
			x = (x-1)%26;
			if(x<0)x+=26;
			cout<<(char)(x+'a');
		}
		cout<<endl;
	}
	return 0;
}
