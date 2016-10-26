#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

bool arr[501][501];

void rect(int x1,int y1,int x2,int y2)
{
	for(int i=x1;i<=x2;i++)
	{
		for(int j=y1;j<=y2;j++)
		{
			arr[i][j] = false;
		}
	}
}

int main()
{
	int w,h,n,x1,x2,y1,y2;
	while(cin>>w>>h>>n)
	{
		if(w==0 && h==0 && n==0)break;
		
		for(int i=0;i<=w;i++)
		{
			for(int j=0;j<=h;j++)arr[i][j] = true;
		}
		
		while(n--)
		{
			cin>>x1>>y1>>x2>>y2;
			if(x1<x2)
			{
				if(y1 > y2)
				{
			//		cout<<"calling with pairs : ("<<x1<<","<<y2<<") & ("<<x2<<","<<y1<<")\n";
					rect(x1,y2,x2,y1);
				}
				else 
				{
			//		cout<<"calling with pairs : ("<<x1<<","<<y1<<") & ("<<x2<<","<<y2<<")\n";
					rect(x1,y1,x2,y2);
				}
			}
			else
			{
				if(y1 > y2)
				{
			//		cout<<"calling with pairs : ("<<x2<<","<<y2<<") & ("<<x1<<","<<y1<<")\n";
					rect(x2,y2,x1,y1);
				}
				else 
				{
			//		cout<<"calling with pairs : ("<<x2<<","<<y1<<") & ("<<x1<<","<<y2<<")\n";
					rect(x2,y1,x1,y2);
				}
			}
		}
		
		int cnt = 0;
		for(int i=1;i<=w;i++)
		{
			for(int j=1;j<=h;j++)
			{
			//	cout<<arr[i][j]<<" ";
				if(arr[i][j])cnt++;
			}
		//	cout<<endl;
		}
		if(cnt==0)cout<<"There is no empty spots.\n";
		else if(cnt==1)cout<<"There is one empty spot.\n";
		else cout<<"There are "<<cnt<<" empty spots.\n";
	}
	return 0;
}
