#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
#define MOD 1000000007
long long int arr[10003];

int main()
{
	ifstream f1;
	//f1.open("output.out");
	int n,k,cnt;
	cin>>n>>k;
	//f1>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		//f1>>arr[i];
	}
	int mx = 0,pos = -1;
	cnt = 0;
	//cout<<"\n all input done :-) \n";
	long long int veto = 0,v;
	veto = 0;
	for(int i=0;i<n;i++)
	{
		veto = ( veto * 10 ) % MOD;
		v = arr[i];
		veto = ( veto + v ) % MOD;
	}
	
	for(int i=0;i<n;i++)
	{
		mx = arr[i];
		pos = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] >= mx)
			{
				mx = arr[j];
				pos = j;
			}	
		}
	//	cout<<"\n for i : "<<i<<" , arr[i] = "<<arr[i]<<", max found ar pos: "<<pos<<", value  mx = "<<mx<<endl;
		if(arr[i]!=mx)
		{
			if(cnt==k)break;
			arr[pos] = arr[i];
			arr[i] = mx;
			cnt++;
		}
	}
	//cout<<"\n arrange done :-) \n";
	long long int ans = 0,pqr;
	if(cnt==0 || cnt==k)
	{
		ans = 0;
		for(int i=0;i<n;i++)
		{
			ans = ( ans * 10 ) % MOD;
			pqr = arr[i];
			ans = ( ans + pqr ) % MOD;
		}
	//	cout<<ans;
	}
	else
	{
		//cout<<"\n num of swaps till now : "<<cnt<<endl;
		for(int i=cnt;i<k;i++)
		{
			pos = arr[n-1];
			arr[n-1] = arr[n-2];
			arr[n-2] = pos;
		}
		ans = 0;
		for(int i=0;i<n;i++)
		{
			ans = ( ans * 10 ) % MOD;
			pqr = arr[i];
			ans = ( ans + pqr ) % MOD;
		}
//		cout<<ans;
	}
	ans = max(ans,veto);
	cout<<ans;
	return 0;
}
