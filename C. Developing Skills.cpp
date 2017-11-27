#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int> > vec(10);

int main()
{
	int n,k,val;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>val;
		vec[val%10].push_back(val);
	}
	for(int i=9;i>=0;i--)
	{
		for(int j=0;j<vec[i].size();j++)
		{
		//	cout<<"\n updateing : "<<vec[i][j]<<endl;
			int it = 10-i;
			while(it--)
			{
				vec[i][j]++;
				k--;
				if(k==0)break;	
			}
			if(k==0)break;
		}
		if(k==0)break;
	}
	val = 0;
	for(int i=0;i<10;i++)
	{
		cout<<"\n end with "<<i<<" : ";
		for(int j=0;j<vec[i].size();j++)
		{
			cout<<vec[i][j]<<" ";
			val = val + (vec[i][j]/10);
		}
		cout<<endl;
	}
	cout<<val;
	vec.clear();
	return 0;
}

