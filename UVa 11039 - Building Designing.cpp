#include<bits/stdc++.h>
using namespace std;

int arr[5000006];
int ans[5000006];

bool myfunc(int a,int b)
{
	if(abs(a) < abs(b))return true;
	return false;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		
		if(n<2)
		{
			cout<<n<<endl;
			continue;
		}
		sort(arr,arr+n,myfunc);
		bool no_idea = false;
		bool pos = false;
		bool neg = false;
		int cnt = 0,temp;
		no_idea = true;
		for(int i=0;i<n;i++)
		{
			if(no_idea)
			{
				temp = abs(arr[i]);
				if(arr[i]<0)pos = true;
				else neg = true;
				cnt++;
				no_idea = false;
			}
			else if(pos && abs(arr[i])> temp && arr[i]>0)
			{
				cnt++;
				temp = abs(arr[i]);
				neg = true;
				pos = false;
			}
			else if(neg && abs(arr[i])>temp && arr[i]<0)
			{
				cnt++;
				temp = abs(arr[i]);
				neg = false;
				pos = true;
			} 
		}
		cout<<cnt<<endl;	
	}
	return 0;
}
