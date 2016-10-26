#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int a[1000010];
long long cnt[1000010];
	int S[1000010];
	long long  T[1000010];
	
int main()
{
//    ios::sync_with_stdio(0);
	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
    int n,m;
	f2>>n>>m;
	//	memset(T, 0, sizeof(T));
		for (int i = 1; i <= n; i++)
			f2>>S[i];
		for (int i = 1; i <= n; i++)
			T[i] = T[i - 1] + S[i];
		if (n >= m && T[n] % m == 0){
			long long  DP[m-1];
			for(int it=0;it<m;it++)DP[it] = 0;
			long long  avg = T[n] / m;
			for (int i = 1; i <= n; i++){
				if (T[i] == avg * 2)	DP[1] += DP[0];
				if (T[i] == avg)	DP[0]++;
			}
			if (avg == 0)
				DP[1] -= DP[0] - 1;
			printf("%lld\n", DP[1]);
			f1<<DP[1]<<endl;
		}
		else
		{
			puts("0");
			f1<<0;
		}
    f1.close();
	f2.close();
    return 0;
}
