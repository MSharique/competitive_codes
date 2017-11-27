#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;

int arr[26];

int main()
{
	int t,len,sum;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		len = str.size();
		for(int i=0;i<len;i++)arr[str[i]-'a']++;
		sum = 0;
		sort(arr,arr+26);
		for(int i=0;i<25;i++)sum += arr[i] , arr[i]=0;
		if(sum==arr[25])cout<<"YES\n";
		else cout<<"NO\n"; 
		arr[25] = 0;
		}
	return 0;
}
