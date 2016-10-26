#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int race,pilots,score;
int rp[110][110],sc[110];

void solve()
{
    int i,j,diem[110];
    for (i=1;i<=pilots;i++)
        diem[i]=0;
    for (i=1;i<=race;i++)
	{
        for (j=1;j<=pilots;j++)
		{
            diem[j] += sc[rp[i][j]];
        }
    }

    int mx=0;
    for (i=1;i<=pilots;i++)
        if (diem[i]>mx) mx=diem[i];
        
    int k=0, rs[100];
    for (i=1;i<=pilots;i++)
        if (diem[i]==mx) rs[++k]=i;
        
    cout << rs[1];
    if (k>1) {
        for (i=2;i<=k;i++)
            cout<<" "<<rs[i];
    }
    cout << endl;
}

int main()
{
    while (cin >> race >> pilots)
	{
        if (race==0 && pilots==0) break;
        int i,j;
    	for (i=1;i<=race;i++)
        	for (j=1;j<=pilots;j++)
            	cin >> rp[i][j];
    	cin >> score;
    	int n;
    	while (score--)
		{
        	cin >> n;
        	for (i=1;i<=n;i++)
            	cin >> sc[i];
        	while (i<=pilots) sc[i++]=0;
        	solve();
    	}
    }
}
