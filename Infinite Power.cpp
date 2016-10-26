#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
	int t;
	char num[50],prev[50],next[50];
	cin>>t;
	while(t--)
	{
		for(int i=0;i<50;i++)
		{
			num[i] = '0';
			next[i] = num[i];
			prev[i] = num[i];
		}
		cin>>num;
		bool even = true;
		int len = strlen(num);
		for(int i=49,it=len-1;it>=0;it--,i--)next[i] = num[it] , prev[i] = num[it]; 
		for(int i=0;i<len;i++)
		{
			if((num[i]-'0')&1)
			{
				even = false;
				break;
			}
		}
		if(even)cout<<"Unlimited Power\n";
		else
		{
			//int next = 0 , prev = 0;
			for(int i=len-1,k=49;i>=0;i--,k--)
			{
				if((num[i]-'0')&1)
				{
					next[k] = (char)(num[i]-'0'+1 + '0');
					if(next[k]=='0')
					{
						int it = k-1;
						while(next[it]=='9' && it>=0)
						{
							next[it] = '0';
							it--;
						}
						if(it>=0)next[it] = (char)(next[it]-'0'+1 + '0');
					}
					for(int j=i+1,it=k+1;j<len;j++,it++)next[it] = '0';		
				}
			}
			
			for(int i=len-1,k=49;i>=0;i--,k--)
			{
				if((num[i]-'0')&1)
				{
					prev[k] = (char)(num[i]-'0' -1 + '0');
					for(int j=i+1,it=k+1;j<len;j++,it++)prev[it] = '8';
				}
			}
			int p = 0 , n = 0 , no=0;
			int it = 0;
			while(num[it]=='0')it++;
			for(int i = it;i<50 && num[i]!='\0';i++)no = (no*10) + (num[i]-'0');
			it = 0;
			while(next[it]=='0')it++;
			for(int i = it;i<50 && next[i]!='\0';i++)n = (n*10) + (next[i]-'0');
			it = 0;
			while(prev[it]=='0')it++;
			for(int i = it;i<50 && prev[i]!='\0';i++)p = (p*10) + (prev[i]-'0');
		/*	for(int i=len-1;i>=0;i--)
			{
				p = (p*10) + (prev[i]-'0');
				n = (n*10) + (next[i]-'0');
			
			}
			cout<<"\n next num : "<<n<<" , prev num : "<<p<<" , actual num : "<<no<<endl; 
		*/	n = abs(n-no);
			p = abs(no-p);
			no = __gcd(n,p);
			n = n/no;
			p = p/no;
			cout<<n<<"/"<<p<<endl;
		}
	}
	return 0;
}
