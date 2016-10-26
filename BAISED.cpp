#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;

vector<int> vec;

int main()
{
	int t,n,x;
	string str;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
				cin>>str;
				scanf("%d",&x);
				vec.push_back(x);
		}
		long long int sum = 0;
		for(int i=0;i<n;i++)
		{
			x = i+1;
			sum = sum + abs(x-vec[i]); 
		}
		vec.clear();
		cout<<sum<<endl;
	}
	return 0;
}
