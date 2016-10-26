#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	long long int num,temp,ans,it;
	cin>>t;
	while(t--)
	{
		cin>>num;
		it = 1;
		while(num)
		{
			temp = num - it;
			if(temp==0)
			{
				ans = it;
				break;
			}
			if(temp <= it)
			{
				
			} 
			else
			{
				ans = it;
				num = temp;
			}
			it++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
