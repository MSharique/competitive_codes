#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int m,n,temp,ans;
	while(true)
	{
		cin>>m>>n;
		if(m==n and m==0)break;
		if(m==0 || n==0)ans = 0;
		else if(m==1 || n==1)ans = max(m,n);
		else if(m==2 || n==2)
		{
			temp = max(m,n);
			int rmp = temp/4;
			temp = temp-3;
			if(temp < 0)ans = 2*(max(m,n) - rmp);
			else 
			{
				temp = temp / 4;
				ans = 2*(max(m,n) - rmp - temp - 1);
			}
		}
		else
		{
			temp = m*n;
			ans = temp/2;
			if(temp&1)ans++;
		}
		cout<<ans<<" knights may be placed on a "<<m<<" row "<<n<<" column board.\n";
	}
	return 0;
}
