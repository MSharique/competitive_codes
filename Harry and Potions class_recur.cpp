#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int ans = 0;
int len = 0 , total_len;

int myfunc(char prev,int cntB,int len)
{
	cout<<"\n char : "<<prev<<" Bcnt : "<<cntB <<" , len : "<<len<<endl;
	if(len == total_len)return 1;
	if(len > total_len)return 0;
	if(prev=='G')
	{
		 ans += myfunc('B' , 1 , len+1);
		 ans += myfunc('G' , 0 , len+1);
	}
	else
	{
		if(cntB==2) ans += myfunc('G' , 0, len+1);
		else if(cntB==3)return 0;
		else 
		{
			 ans += myfunc('B' , 2 , len+1);
			 ans += myfunc('G' , 0 , len+1);
		}
	}
	//return ans;
}

int main()
{
	cin>>total_len;
	int ans1 = myfunc('B' , 1 , 1);
	cout<<"\n answer here : "<<ans1<<endl;
	int ans2 =  myfunc('G' , 0 , 1);
	cout<<ans1+ans2<<endl;
	return 0;
}
