#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int n,k,ans;
	cin>>n>>k;
	if(n==k){
		cout<<0;
		return 0;
	}
	ans = n+k;
	for(int i=0;i<2*n + 1;i++)
	{
		for(int j=1;j<=i/2;j++)
		{
		//	cout<<"\n consider i = "<<i<<" , j =  "<<j<<endl;
			if(i%j==0)
			{
				ans = min(ans , abs(n-i)+abs(k-j));
				ans = min(ans , abs(n-i)+abs(k-(i/j)));	
			}
		}
	}
	cout<<ans;
	return 0;
}
