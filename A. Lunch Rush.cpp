#include<iostream>
#include<algorithm>
#include<set>
#include<climits>
using namespace std;

int main()
{
	int n,k,a,b,ans=INT_MIN;
	cin>>n>>k;
	while(n--)
	{
		cin>>a>>b;
		if(b > k)
		{
			a = a-(b - k);
		}
		ans = max(ans,a);
	}
	cout<<ans;
	return 0;
}

