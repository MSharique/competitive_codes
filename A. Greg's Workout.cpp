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
	int n,x;
	cin>>n;
	int c = 0 , bi = 0 , ba = 0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(i%3 == 0 )c = c + x;
		else if(i%3 == 1 )bi = bi + x;
		else ba = ba + x;
	}
	if(c > bi && c > ba)cout<<"chest";
	else if(bi > c && bi > ba)cout<<"biceps";
	else cout<<"back";
	return 0;
}
