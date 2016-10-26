#include<iostream>
#include<string>
#include<algorithm>
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
		int four = count(str.begin(),str.end(),'4');
		int seven = count(str.begin(),str.end(),'7');
		four = len - (four+seven);
		cout<<four<<endl;
	}
	return 0;
}
