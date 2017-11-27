#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,high,low,pre,next;
	cin>>t;
	for(int ca=1;ca<=t;ca++)
	{
		cin>>n>>pre;
		high = low = 0;
		for(int i=1;i<n;i++)
		{
			cin>>next;
			if(next > pre)high++;
			else if(next < pre)low++;
			pre = next;
		}
		cout<<"Case "<<ca<<": "<<high<<" "<<low<<endl;
	}
	return 0;
}
