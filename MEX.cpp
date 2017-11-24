#include <bits/stdc++.h>
using namespace std;

bool arr[200003];

int main(int argc, char const *argv[])
{
	int t, n, k;
	cin>>t;
	while(t--) 
	{
		int mx = 0, temp;
		cin>>n>>k;
		for(int i=0; i<n; i++)
		{
			cin>>temp;
			arr[temp] = true;
			mx = max(mx, temp);
		}

		int i=0;
		bool check = false;
		for(i=0;i<=mx;i++)
		{
			if(!arr[i])
			{
				if(k>0)
				{
					k--;
					arr[i] = true;
				}
				else
				{
					check = true;
					break;
				}
			}
		}

		if(check)
			cout<<i<<endl;
		else
		{
			while(k>0)
			{
				i++;
				k--;
			}
			cout<<i<<endl;
		}

		mx = max(mx,i);
		while(mx>=0)
		{
			// cout<<"i = " << i << " : " <<arr[i]<<endl;
			arr[mx] = false;
			mx--;
		}
	}
	return 0;
}