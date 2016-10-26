#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

int main()
{
	int t;
	string abcd , input;
	cin>>t>>abcd;
	while(t--)
	{
		cin>>input;
		int len = input.size();
		for(int i=0;i<len;i++)
		{
			if(input[i]=='_')cout<<" ";
			else if(isupper(input[i]))cout<<(char)toupper(abcd[input[i]-'A']);
			else if(islower(input[i]))cout<<(char)tolower(abcd[input[i]-'a']);
			else cout<<input[i];
		}cout<<endl;
	}
	return 0;
}
