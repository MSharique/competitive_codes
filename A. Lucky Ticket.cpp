#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
using namespace std;

int main()
{
	int n,suml=0,sumr=0;
	bool flag = true;
	cin>>n;
	string str;
	cin>>str;
	for(int i=0;i<n/2;i++)
	{
		if(str[i]!='4' && str[i]!='7')
		{
			flag = false;
			break;
		}
		suml = suml + (str[i]-'0');
	}
	if(flag)
	{
		for(int i=n/2;i<n;i++)
		{
			if(str[i]!='4' && str[i]!='7')
			{
				flag = false;
				break;
			}
			sumr = sumr + (str[i]-'0');
		}
	}
	if(flag && suml==sumr)cout<<"YES";
	else cout<<"NO";
	return 0;
}
