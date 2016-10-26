#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int arr[26];
string str;

int main()
{
	int t,k,cnt;
	cin>>t;
	while(t--)
	{
		int mn = 1000000;
		for(int i=0;i<26;i++)arr[i] = 0;
		cin>>str>>k;
		int len = str.length();
		for(int i=0;i<len;i++)
		{
			arr[str[i]-'a']++;	
		}
		for(int i=0;i<26;i++)if(arr[i]!=0)mn = min(mn,arr[i]);
		//cout<<"\n min = "<<mn<<endl;
		cnt = 0;
		for(int i=0;i<26;i++)
		{
			if(arr[i]!=0)
			{
				int x = abs(arr[i]-mn); 
				if(x > k)cnt = cnt + (x-k);
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
