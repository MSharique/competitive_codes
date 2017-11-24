#include <bits/stdc++.h>
using namespace std;
int arr[1000005];
int sort_arr[1000005];
map<int, int> mp;
int ll, ul, prevNum, current, k;

bool check4value(int pre, int current)
{
	if(pre < k) 
	{
		if(current < pre)
			return false;
		return true;
	}
	else
	{
		if(current > pre)
			return false;
		return true;
	}
}

bool checkpos(int current, int n)
{
	// cout<<"current = " << current<<endl;
	int pos = mp[current];
	// cout<<"pos of current = " << pos <<endl;
	if(pos < ll || pos > ul)
		return false;
	if(current < k)
		ll = pos;
	else
		ul = pos;
	// cout<<	"ll = " << ll << " , ul = " << ul <<endl;
	return true;
}

int main(int argc, char const *argv[])
{
	int t, n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sort_arr[i] = arr[i];
			// mp[arr[i]] = i;
		}
		sort(sort_arr, sort_arr + n);
		for(int i=0;i<n;i++)
			mp[sort_arr[i]] = i;

		bool yes = true;
		ll = 0;
		ul = n-1;
		prevNum = -1;
		for(int i=0; i<n; i++)
		{
			if(check4value(prevNum, arr[i]))
			{
				if(checkpos(arr[i], n))
				{
					prevNum = current;
				}
				else 
				{
					yes = false;
					break;
				}
			}
			else
			{
				yes = false;
				break;
			}
		}
		if(yes)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		mp.clear();
	}
	return 0;
}