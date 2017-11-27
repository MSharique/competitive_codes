#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

int main()
{
	int t,n,k,ans,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		//cout<<"\n n = "<<n<<" , k = "<<k<<endl;
		if(k>83)cout<<-1<<endl;
		else
		{
			a = k/9;
			//cout<<"\n a = "<<a<<endl;
			if(k%9==0)
			{
				b = 9;
				for(int i=0;i<n;i++)
				{
					if(i&1)cout<<b;
					else cout<<a;
				}
				cout<<endl;
			}
			else
			{
				a =ceil(k/9.0);
				b = k-9*(a-1);
				if(b<=a)b = b-1;
				for(int i=0;i<n;i++)
				{
					if(i&1)cout<<b;
					else cout<<a;
				}
				cout<<endl;
			}
		}
	}
	return 0;
}
