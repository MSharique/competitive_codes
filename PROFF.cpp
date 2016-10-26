#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;

int first[50];
int sec[50];

int main()
{
	string a,b;
	while(cin>>a>>b)
	{
		if(a==b && b=="0")break;
		int len = a.size();
		int it = 49;
		for(int i=len-1;i>=0;i--)
		{
			first[it--] = a[i]-'0';
		}
		len = b.size();
		it = 49;
		for(int i=len-1;i>=0;i--)
		{
			sec[it--] = b[i]-'0';
		}
	/*	cout<<"\n a  : "<<a<<endl;
		cout<<"\n fir : \n";
		for(int i=0;i<50;i++)cout<<first[i];cout<<endl;
		cout<<"\n b  : "<<b<<endl;
		cout<<"\n sec : \n";
		for(int i=0;i<50;i++)cout<<sec[i];cout<<endl;
	*/	int carry = 0,cnt=0;
		for(int i=49;i>=0;i--)
		{
			carry = carry + first[i] + sec[i];
		//	cout<<"\n sum = "<<carry<<endl;
			cnt += carry/10;
			carry = carry/10; 
		}
		for(int i=0;i<50;i++)first[i]=0 , sec[i]=0;
		
		if(cnt==0)cout<<"No carry operation.\n";
		else if(cnt==1)cout<<"1 carry operation.\n";
		else cout<<cnt<<" carry operations.\n";
	}
	return 0;
}
