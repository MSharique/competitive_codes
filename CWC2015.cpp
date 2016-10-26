#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[1001];

int main()
{
	int t,n,fir,sec,cs=1,cnt1,cnt2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		fir = arr[n-1];
		sec = 0;
		cnt1 = 1 ;
		cnt2 = 0;
		for(int i=n-2;i>=0;i--)
		{
			if(fir < sec)fir = fir + arr[i] , cnt1++;
			else sec = sec + arr[i] , cnt2++;
		}
		cout<<"Case "<<cs++<<": ";
		if(fir == sec && cnt1==cnt2)cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

