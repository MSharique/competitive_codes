#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	bool flag = true;
	long long int a,b,c,d,e,f;
	cin>>a>>e;
	for(b = a;b<e-1;b++)
	{
		for(c = b+1;c<e;c++)
		{
			f = __gcd(b,c);
			if(f==1)
			{
				for(d = c+1;d<=e;d++)
				{
					f = __gcd(c,d);
					if(f==1)
					{
						f = __gcd(b,d);
						if(f!=1)
						{
							flag = false;
							break;
						}
					}
				}
				if(!flag)break;
			}
		}
		if(!flag)break;
	}
	if(flag)cout<<-1;
	else cout<<b<<" "<<c<<" "<<d;
	return 0;
}
