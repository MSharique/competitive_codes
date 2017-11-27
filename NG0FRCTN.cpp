#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

struct node
{
	int num;
	int den;
	int no;
}N;

node func(long long int n)
{
	//cout<<"\n func with n = "<<n<<endl;
	if(n==1)
	{
		N.num = 1;
		N.den = 1;
		N.no = 1;
		return N;
	}
	node temp = func(n/2);
	long long int z = 2*temp.no;
	//cout<<"\n z = "<<z<<endl;
	if(z==n)	//left
	{
		N.num = temp.num;
		N.den = temp.num + temp.den;
		N.no = z; 
	}
	else
	{
		N.num = temp.num + temp.den;
		N.den = temp.den ;
		N.no = z+1; 
	}
	return N;
}

int main()
{
	long long int x,ans;
	while(cin>>x)
	{
		if(x==0)break;
		node ans = func(x);
		cout<<ans.num<<"/"<<ans.den<<endl;
	}
	return 0;
}

