#include<bits/stdc++.h>
using namespace std;

bool myfunc(string num1,string num2)
{
	if(num1+num2 > num2+num1)return true;
	return false;
}

int main()
{
	int n;
	string num[51];
	
	while(cin>>n)
	{
		if(n==0)break;
		for(int i=0;i<n;i++)cin>>num[i];
		sort(num,num+n,myfunc);
		for(int i=0;i<n;i++)cout<<num[i];cout<<endl;
	}
	return 0;
}
