#include<iostream>
#include<cstdio>
#include<algorithm>
#include<bitset>
#include<string>
using namespace std;

int c(int n,int r)
{
	if(n==r)return 1;
	if(r==1)return n;
	if(r>n)return 0;
	return c(n-1,r) + c(n-1,r-1);
}

int main()
{
	int x,n;
	cin>>x>>n;
	string str;
	int ans=0,cnt;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		bitset<54> bt (str);
		//cout<<"\n input bitset : "<<bt<<endl;
		int q=53;
		for(int j=0;j<36;j+=4)
		{
			cnt = 0;
			for(int k=j;k<j+4;k++)
			{
				if(!bt.test(k))cnt++;
			}
			//cout<<q-- << " "<< q--<<endl; 
			if(!bt.test(q--))cnt++;
			if(!bt.test(q--))cnt++;
			cout<<"\n cnt : "<<cnt<<endl;
			cnt = c(cnt,x);
			cout<<"\n combination : "<<cnt<<endl;
			ans = ans + cnt;
		} 
	}
	cout<<ans;	
	return 0;
}
