#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,s,a,b,ans=0;
	cin>>n>>s;
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a==s && b==0)
		{
			flag = false;
			ans = max(ans,0); 
		}
		else if(a<s)
		{
			flag = false;
			int temp = s-a;
			temp = temp*100;
			temp = temp - b;
			temp = temp%100;
			ans = max(ans,temp);
		}
	}
	if(flag)cout<<-1;
	else cout<<ans;
	return 0;
}
