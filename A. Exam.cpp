#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<string>
#include<map>
#include<utility>
using namespace std;

int main()
{
/*	int n;
	cin>>n;
	if(n < 3)cout<<"1\n1";
	else if(n==3)cout<<"2\n1 3";
	else if(n==4)cout<<"4\n2 4 1 3";
	else
	{
		cout<<n <<endl;
		int a = 1;
		int b = n/2;
		if(n%2==0)
			b = b +1;
		else b = b+2;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)cout<<a++<<" ";
			else cout<<b++<<" ";
		}
	}
*/
	int x = 3 , y=5 , z=8;
	//x = (++z)/(y--) - (++x)*(x--);
	x = --x * x++;
	cout<<x<<" "<<y<<" "<<z;
	return 0;
}
