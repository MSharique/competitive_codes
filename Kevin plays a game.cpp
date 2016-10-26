#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
bool arr[100003];

int main()
{
	int t,n,k,ans,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		bool flag = 0;
		ans = n/2;
		for(int i=1;i<=n;i++)
		{
			if(i&1)
			{
				ans = ans + i;
				arr[i] = 1;
			}
			else ans = ans - i , arr[i] = 0;
			if(ans <0 || ans > n)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		{
			ans = n/2;
			for(int i=1;i<=n;i++)
			{
				if(i&1)
				{
					ans = ans - i;
					arr[i] = 0;
				}
				else ans = ans + i , arr[i] = 1;
			}
		}
		cout<<n<<" "<<n/2<<endl;
		for(int i=1;i<=n;i++)
			if(arr[i])cout<<"+";
			else cout<<"-";
		cout<<endl;	
	}
	return 0;
}
