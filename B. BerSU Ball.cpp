#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

int boy[101];
int girl[101];

int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)cin>>boy[i];
	cin>>m;
	for(int i=0;i<m;i++)cin>>girl[i];
	sort(boy,boy+n);
	sort(girl,girl+m);
	int i = 0 , j = 0 , cnt= 0;
	while(i<n && j < m)
	{
//		cout<<"\n boy = "<<boy[i]<<" , gitl = "<<girl[j]<<endl;
		if(abs(boy[i]-girl[j]) <2)cnt++ , i++ , j++ ;
		else
		{
			if(boy[i] < girl[j])i++;
			else j++;
		}
	}
	cout<<cnt;
	return 0;
}
