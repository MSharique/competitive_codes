#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<climits>
#include<cstring>
#include<vector>
using namespace std;

bool arr[1000006];
vector<string> vec;

int main()
{
	int t,n,len;
	bool it;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>str;
			vec.push_back(str);
		}
		memset(arr,false,sizeof(arr));
		len = 0;
		int i=0,cnt = 0;
		sort(vec.begin(),vec.end());
		for(i=n-1;i>=0;i--)
		{
			it = false;
			//cout<<"\n index num : "<<i<<endl;
			for(int j=0;j<vec[i].size();j++)
			{
				//cout<<"\n check for member num : "<<j<<endl;
				//cout<<"\n string : "<<vec[i]<<" , with char : "<<vec[i][j]<<endl;
				if(vec[i][j]=='Y')
				{
					if(!arr[j])
					{
						arr[j] = true;
						cnt++;
						it = true;
						//cout<<"\n count becomes : "<<cnt<<endl;
					}
				}
			}
			if(it)len++;
			if(cnt==vec[i].size())break;
		}
		cout<<len<<endl;
		vec.clear();
	}
	return 0;
}
