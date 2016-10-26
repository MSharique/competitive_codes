#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define lli long long int
lli BB[100010];
lli BG[100010];
lli GB[100010];
lli GG[100010];

int main()
{
	ofstream f1;
	f1.open("output.out");
	int i,n;
	BB[2]=BG[2]=GB[2]=GG[2]=1;
	for(int it=1;it<=100000;it++)
	{
		n = it;
		if(n==1)
		{
			cout<<2<<endl;
			f1<<2<<endl;
			//return 0;
		}
		else
		{
			for(i=3;i<=n;i++)
			{
				BB[i]=GB[i-1]%MOD;
				BG[i]=(GB[i-1]+BB[i-1])%MOD;
				GB[i]=(BG[i-1]+GG[i-1])%MOD;
				GG[i]=(BG[i-1]+GG[i-1])%MOD;
			}
		
			cout<<(BB[n]+BG[n]+GB[n]+GG[n])%MOD<<endl;
			f1<<(BB[n]+BG[n]+GB[n]+GG[n])%MOD<<endl;	
		}
			cout<<"\n it = "<<it<<endl;
	}
	f1.close();
	return 0;
}
