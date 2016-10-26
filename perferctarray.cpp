#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

struct ar
{
	int val;
	int pos;
}arr[100003];

bool func(struct ar a,struct ar b)
{
	cout<<a.val<<" , "<<b.val<<endl;
	cout<<a.pos<<" , "<<b.pos<<endl;
	cout<<"\n...........\n";
	if(a.pos%2==1 && b.pos%2==1)		//odd position
	{
		if((a.val%2==1 && b.val%2==1) || (a.val%2==0 && b.val%2==0) )	//both odd num or both even
		{
			if(a.val <= b.val)return true;
			else
			{
				cnt++;
				return false;
			}
		}
		else if(a.val%2==1 && b.val%2==0) //frst odd , second even
		{
			if(a.val <= b.val)return true;
			else {
				cnt++;
				return false;
			}	
		}
		else		//first even , sec odd
		{
			
		}
	}
	
		
}

int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr[i].val = x;
		arr[i].pos = i+1;
	}
	sort(arr,arr+n,func);
	return 0;
}
