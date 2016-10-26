#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<utility>
#include<map>
#include<climits>
using namespace std;

string str;
int cost[100003];
vector<int> ones;

int main()
{
	int t,n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		cin>>str;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&ans);
			if(str[i]=='1')
			{
				ones.push_back(ans);
			}
			cost[i] = ans;
		}
		
	//	sort(ones.begin(),ones.end());
		//cout<<"1's at coordinates : ";
		//for(int i=0;i<ones.size();i++)cout<<ones[i]<<" ";cout<<endl;
		int first ,temp=INT_MAX, last ,it=0;
		//ans = ones[0] - cost[0];
		int len = ones.size();
		//ans += abs(cost[n-1] - ones[len-1]);
		
		if(len==1)
		{
			ans = ones[0] - cost[0];
			ans += cost[n-1] - ones[0];
		}
		else
		{
			first = ones[0];
			last = ones[1];
			it = 0;
			int myit = 1;
			while(str[it++]=='0');
			int st = it;
			it = n-1;
			while(str[it--]=='0');
			ans = ones[0] - cost[0];
		//	cout<<"\n left side cost = "<<ans<<endl;
			ans += cost[n-1] - cost[it+1];
		//	cout<<"\n left+right side cost = "<<ans<<endl;
			temp = INT_MAX;
			for(int i=st;i<=it;i++)
			{
				//cout<<"\n i = "<<i<<" with first = "<<first<<" and last = "<<last<<endl;
				if(str[i]=='1')
				{
					first = last;
					myit++;
					last = ones[myit];
					if(temp!=INT_MAX)ans = ans + temp;
					temp = INT_MAX;
				}
				else
				{
					int tp1 = cost[i] - first;
					tp1 += last - cost[i+1];
					int tp2 = last - cost[i];
					tp2 += cost[i-1] - first;
					tp1 = min(tp1,tp2); 
					temp = min(tp1,temp);
				}
			}
		}
		if(temp!=INT_MAX)ans += temp;
		cout<<ans<<endl;
		ones.clear();
		
	}
	return 0;
}
