#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int vowel=0;
	vector<char> vec;
	int len = str.size();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		{
			vec.push_back(str[i]);
			vowel++;
		}
	}
	int it=0;
	for(int i=0;i<vowel;i++)
	{
		for(int j=0;j<vowel;j++)
		{
			if(i==j)cout<<vec[it++];
			else cout<<" ";
		}
		cout<<endl;
	}
	vec.clear();
}
