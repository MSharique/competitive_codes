#include<bits/stdc++.h>
using namespace std;
int arr[1003];

int main()
{
	int n;
	int i;
	while(cin>>n)
	{
		if(n == 0)break;
		while(cin>>arr[0])
		{
			if(arr[0]==0)
			{
				cout<<endl;
				break;
			}
			for(i=1;i<n;i++)cin>>arr[i];
			int currCoach = 1, targetIndex = 0;
			stack<int> station;
			while(currCoach<=n)
			{
				station.push(currCoach);
				while(!station.empty() && station.top() == arr[targetIndex])
				{
					station.pop();
					targetIndex++;
					if(targetIndex>=n) break;
				}
				currCoach++;
			}
			if(station.empty())cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
	return 0;
}
