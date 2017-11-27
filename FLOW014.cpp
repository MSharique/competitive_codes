#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int t;
	double a,b,c;
	bool fir=0;
	bool sec=0;
	bool thi=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		fir = sec = thi = false;
		if(a>50)fir=1;
		if(b < 0.7)sec=1;
		if(c>5600)thi=1;
		if(fir && sec && thi)cout<<10<<endl;
		else if(fir && sec)cout<<9<<endl;
		else if(sec && thi)cout<<8<<endl;
		else if(fir && thi)cout<<7<<endl;
		else if(fir || sec || thi)cout<<6<<endl;
		else cout<<5<<endl;
	}
	return 0;
}
