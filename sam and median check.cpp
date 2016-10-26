//	Coded by:  samfisher
#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
double getMedian(vector<int> &tmp)
{
	sort(tmp.begin(), tmp.end());
	int n = tmp.size();
	if(n%2 == 0)
		return (tmp[n/2]+tmp[(n/2)-1]*1.0)/2.0;
	else
		return tmp[n/2];	
}
int main()
{
	//ios_base::sync_with_stdio(false);
	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	int t,i,j,n,q,left;
	double out;	
	//cin>>n;
	f2>>n;
	left = n;
	vector<int> arr(n),del(n,0);
	for(i=0;i<n;i++)
	{
		//cin>>arr[i];
		f2>>arr[i];
	}
	

	//cin>>q;
	f2>>q;
	while(q--)
	{
		f2>>t;
		//cin>>t;
		if(left == 0)
		{
			cout<<"EMPTY\n";
			f1<<"EMPTY\n";
			continue;
		}
		if(t==1)
		{
			for(i=0;i<n;i++)
			{
				if(del[i] == 0)
				{
					del[i] = 1;
					cout<<arr[i]<<endl;
					f1<<arr[i]<<endl;
					break;
				}
			}
		}
		else if(t==2)
		{
			for(i=n-1;i>=0;i--)
			{
				if(del[i] == 0)
				{
					del[i] = 1;
					//cout<<arr[i]<<endl;
					f1<<arr[i]<<endl;
					break;
				}
			}	
		}
		else
		{
			vector<int> tmp;
			for(i=0;i<n;i++)
			{
				if(del[i]==0)
					tmp.push_back(arr[i]);
			}
			double x = getMedian(tmp);
			cout<< x <<endl;
			f1<< x <<endl;
			if(tmp.size()%2 == 1)
			{
				j = x;
				for(i=0;i<n;i++)
				{
					if(arr[i] == j)
					{
						del[i] = 1;
						break;
					}
				}
			}
		}
		left --;
	}
	f1.close();
	f2.close();
	return 0;
}
