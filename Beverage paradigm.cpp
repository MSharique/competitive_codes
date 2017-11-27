#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> arr;

int main()
{
	int n,temp,sum;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	cin>>sum;
	temp = 0;
	sort(arr.begin() , arr.end());
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			temp = arr[i] + arr[j];
			//cout<<"\n value sum : "<<temp<<endl;
			temp = sum - temp;
			//cout<<"\n searching : "<<temp<<endl;
			if(binary_search(arr.begin()+j+1 , arr.end(), temp))
			{
				flag=1;
				break;
			}
		}
		if(flag)break;
	}
	if(flag)cout<<"True\n";
	else cout<<"False\n";
	return 0;
}
