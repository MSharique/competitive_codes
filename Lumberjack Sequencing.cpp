#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int arr[10];
int asc[10];

int main()
{
	int t;
	cin>>t;
	cout<<"Lumberjacks:\n";
	while(t--)
	{
		for(int i=0;i<10;i++)cin>>arr[i] , asc[i] = arr[i];
		sort(asc,asc+10);
		bool flag = true;
		for(int i=0;i<10;i++)
		{
			if(arr[i]!=asc[i]){
				flag = false;
				break;
			}
		}
		if(flag)cout<<"Ordered\n";
		else
		{
			for(int i=0,j=9;i<10;i++,j--)
			{
				//cout<<"\n desc check , arr["<<i<<"] = "<<arr[i]<<" , asc["<<j<<"] : "<<asc[j]<<endl;
				if(arr[i]!=asc[j])
				{
					flag = true;
					break;
				}
			}
			if(!flag)cout<<"Ordered\n";
			else cout<<"Unordered\n";
		}
	}
	return 0;
}
