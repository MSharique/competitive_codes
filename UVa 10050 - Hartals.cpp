#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

bool arr[3653];

int main()
{
	int t,n,p,day;
	cin>>t;
	while(t--)
	{
		for(int i=0;i<3653;i++)arr[i] = false;
		cin>>n>>p;
		for(int i=0;i<p;i++)
		{
			cin>>day;
			int temp = day;
			while(temp <= n)
			{
				arr[temp] = true;
				temp = temp + day; 
			}	
		}
		int cnt = 0;
		for(int i=1;i<=n;i++)
		{
			if(arr[i])
			{
				day = i%7;
				if(day!=0 && day!=6)cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0; 
}
