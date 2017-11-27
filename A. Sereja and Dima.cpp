#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int arr[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	int s = 0 , d=0;
	bool turn = true;
	int i=0 , j=n-1;
	while(i<=j)
	{
		if(turn)
		{
			if(arr[i]>=arr[j])
			{
				s = s + arr[i++];
			}
			else s = s + arr[j--];
			turn = !turn;
		}
		else
		{
			turn = !turn;
			if(arr[i]>=arr[j])
			{
				d = d + arr[i++];
			}
			else d = d + arr[j--];
		}
	}
	cout<<s<<" "<<d<<endl;
	return 0;
}
