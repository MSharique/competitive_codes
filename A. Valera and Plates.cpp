#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,b,p,x,ans=0;
	cin>>n>>b>>p;
	//cout<<"\n n= "<<n<<" , p = "<<p<<" , b = "<<b<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		//cout<<"\n i = "<<i<<" , x = "<<x<<endl;
		if(x==1)
		{
			if(b==0)ans++;
			else b--;
		}
		else
		{
			if(p>0)p--;
			else if(b>0)b--;
			else ans++;
		}
	}
	cout<<ans;
	return 0;
}

