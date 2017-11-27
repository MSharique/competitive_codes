#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
	int n,a,b,c,ans = INT_MIN;
	cin>>n>>a>>b>>c;
	int temp1,temp2,a1,a2;
	a1 = n/a;
	a2 = n / b;
	for(int i=0;i<=a1;i++)
	{
		temp1 = a*i;
		for(int j=0;j<=a2;j++)
		{
			temp2 = b*j;
			int x = temp1 + temp2;
			temp2 = n - x ;
			if(temp2>=0 && temp2%c==0)
			{
				temp2 = temp2 / c;
				temp2 = i + j + temp2;
				ans = max(ans,temp2);
//				cout<<"\n No of ribbon of size "<<a<<" is : "<<i<<endl;
//				cout<<"\n No of ribbon of size "<<b<<" is : "<<j<<endl;
//				cout<<"\n No of ribbon of size "<<c<<" is : "<<temp2<<endl;
			}
		}
	}
	cout<<ans;
	return 0;
}
