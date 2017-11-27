#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int grp,len,it;
	string str;
	while(cin>>grp)
	{
		if(grp==0)break;
		cin>>str;
		len = str.length();
		it = len/grp;
		for(int i=it;i<len;i+=it)
		{
			//cout<<"\n start from index : "<<i<<endl;
			for(int j=i-1,k=0;k<it;j--,k++)cout<<str[j];
		}
		for(int j=len-1,k=0;k<it;j--,k++)cout<<str[j];
		cout<<endl;
	}
	return 0;
}
