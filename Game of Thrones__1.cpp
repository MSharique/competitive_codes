#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
bool arr[26];

int main()
{
	string str;
	cin>>str;
	int len = str.length();
	for(int i=0;i<len;i++)
	{
		int temp = str[i]-'a';
		arr[temp]= !arr[temp];
	}
	int it = 0;
	for(int i=0;i<len;i++)if(arr[i])it++;
	if(it%2 && it!=1)cout<<"NO\n";
	else cout<<"YES\n";
	return 0;
}
