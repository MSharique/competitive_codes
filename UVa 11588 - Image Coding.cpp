#include<bits/stdc++.h>
using namespace std;

string str;
int arr[26];

int main()
{
	int t,r,c,m,n,cs=1;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<26;i++)arr[i]=0;
		cin>>r>>c>>m>>n;
		for(int i=0;i<r;i++)
		{
			cin>>str;
			for(int j=0;j<c;j++)arr[str[j]-'A']++;
		}
		sort(arr,arr+26);
		c = arr[25];
		long long int ans = 0;
		for(int i=0;i<26;i++)
		{
			if(c==arr[i])
			{
				ans = ans + (arr[i]*m);
			}
			else ans = ans + (arr[i]*n);
		}
		cout<<"Case "<<cs++<<": "<<ans<<endl;
	}
	return 0;
}
