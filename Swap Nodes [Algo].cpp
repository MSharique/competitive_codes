#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int arr[4096];

void inorder(int it,int lt)
{
	//cout<<"\n inorder indes : "<<it<<" , lim = "<<lt<<endl;
	if(it >= lt)return ;
	if(arr[it]==-1)return ;
	inorder(2*it, lt);
	cout<<arr[it]<<" ";
	inorder(2*it + 1  , lt);
}

int main()
{
	for(int i=0;i<4096;i++)arr[i]=-1;
	int n,l,r,k,h,par=1;
	cin>>n;
	arr[0] = -1;
	arr[1] = 1;
	for(int i=1;i<=n;i++)
	{
		cin>>l>>r;
		//arr[i] = i;
		for(;arr[par]== -1;par++);
		arr[2*par] = l;
		arr[2*par+1] = r;
		par++;
	}
	cout<<"\n arr : ";
	for(int i=0;i<par;i++)cout<<arr[i]<<" ";cout<<endl;
	inorder(1 , par);
	cout<<endl;
	cin>>k;
	//int nodes = pow()
	while(k--)
	{
		cin>>h;
		int it = h;
		bool off = false;
		 while(true)
		 {
		 	l = pow(2.0 , h-1);
			r = pow(2.0 , h) - 1;
			cout<<"\n range :  ("<<l<<" , "<<r<<" ) ";
			for(int i=l;i<=r;i++)
			{
				if(i < par && 2*i < par && (2*i +1) < par )
				{
					if(arr[i]!= -1)
					{
						int x = arr[2*i];
						arr[2*i] = arr[2*i + 1];
						arr[2*i + 1] = x;
					}
				}
				else
				{
					off = true;
					break;
				}
			}
			if(off)break;
			h = h + it;
		 }
	cout<<"\n arr : ";
	for(int i=0;i<par;i++)cout<<arr[i]<<" ";cout<<endl;
		 inorder(1 ,par);
		 cout<<endl;
	}
	return 0;
}
