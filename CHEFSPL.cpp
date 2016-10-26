#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
string str;

bool in_gen_check(int i,int j,int mid,int len)
{
//	cout<<"\n check for i= "<<i<<" , j = "<<j<<" , mid = "<<mid<<" , len = "<<len<<endl;
	while(i<mid)
	{
		if(str[i]!=str[j])return 0;
		i++;
		j++;
	}
	return true;
}

int main()
{
	int n,len,mid;
	//string str;
	cin>>n;
	while(n--)
	{
		cin>>str;
		len = str.length();
		if(len==1)cout<<"NO\n";
		else
		{
//			cout<<"\n len = "<<len<<endl;
			if(len&1)
			{
				bool first  = 0,flag = 0,in = 0;
				mid = len/2;
				int i=0 , j= mid;
//				cout<<"\n mid = "<<mid<<endl;
				while(i<mid)
				{
					if(str[i]!=str[j])
					{
//						cout<<"\n mismatch at i = "<<i<<" , j = "<<j<<endl;
						in = 1;
						flag = in_gen_check(i,j+1,mid,len);
						first = 	in_gen_check(i+1,j,mid,len);
						if(flag || first)flag = 1;
						break;
					}
					i++ , j++;
				}
				if(in)
				{
					if(flag)cout<<"YES\n";
					else cout<<"NO\n";
				}
				else cout<<"YES\n";
			}
			else
			{
				mid = len/2;
				int i=0 , j = mid;
				bool flag = in_gen_check(i,j,mid,len);
				if(flag)cout<<"YES\n";
				else cout<<"NO\n";	
			}
			
		}
	}
	return 0;
}
