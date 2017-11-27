#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[1003];

int main()
{
	int n;
	long long int ans,sum,ans1;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	bool check = true;
	ans = 0;
	bool turn = true;
	int i = 0 , j = n-1;
	while(i<=j)
	{
		cout<<"calc diff b/w "<<arr[i]<<" , "<<arr[j]<<endl;
		sum = abs(arr[i] - arr[j]);
		ans = ans + sum;
		if(turn)i++;
		else j--;
		turn = !turn;
	}
	cout<<"\n ans : "<<ans<<endl;
	turn = true;
	ans1 = 0;
	i = 0 , j = n/2;
	while(i<n/2 && j<n)
	{
		cout<<"calc diff b/w "<<arr[i]<<" , "<<arr[j]<<endl;
		sum = abs(arr[i] - arr[j]);
		ans1 = ans1 + sum;
		if(turn)i++;
		else j++;
		turn = !turn;
	}
	cout<<"\n ans1 : "<<ans1<<endl;
	cout<<max(ans,ans1);
	return 0;
}

