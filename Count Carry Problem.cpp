#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
	int t,carry,count,i,j;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		carry = 0;
		count = 0;
		for(i=a.length()-1 , j = b.length()-1 ; i>=0 && j>=0 ; i-- , j--)
		{
			int num = a[i]-'0' + b[j]-'0' + carry;
			if(num>9)count++;
			carry = num/10;
		}
		if(i>=0)
		{
			while(carry!=0 && i>=0)
			{
				int num = a[i--]-'0' + carry;
				if(num>9)count++;
				carry = num/10;
			}
		}
		if(j>=0)
		{
			while(carry!=0 && j>=0)
			{
				int num = b[j--]-'0' + carry;
				if(num>9)count++;
				carry = num/10;
			}
		}
		if(count==0)cout<<"No carry operation\n";
		else if(count==1)cout<<"1 carry operation\n";
		else cout<<count<<" carry operations\n";
	}
	return 0;
}
