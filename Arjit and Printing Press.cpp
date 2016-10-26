#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	string a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		sort(b.begin() , b.end() );
		int it= 0 , len = a.size() , lenb = b.size();
		for(int i=0;i<len;i++)
		{
			if(a[i] > b[it] && it< lenb) a[i] = b[it++];
			
		}
		cout<<a<<endl;
	}
	return 0;
}
