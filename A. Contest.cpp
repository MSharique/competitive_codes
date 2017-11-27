#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int a,b,c,d,temp1,temp2;
	cin>>a>>b>>c>>d;
	temp1 = (3*a) / 10;
	a = a - ((a*c)/250);
	temp1 = max(a,temp1);
	temp2 = (3*b) / 10;
	b = b - ((b*d)/250);
	temp2 = max(b,temp2);
	if(temp1<temp2)cout<<"Vasya";
	else if(temp1 > temp2)cout<<"Misha";
	else cout<<"Tie";
	return 0;
}
