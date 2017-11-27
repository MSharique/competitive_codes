#include<iostream>
using namespace std;

int main()
{
	long long int arr[21];
	arr[0]=1;
	//cout<<arr[0]<<endl;
	for(int i=1;i<=20;i++)
	{
		arr[i] = i*arr[i-1];
		//cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<arr[n]<<endl;
	}
	return 0;
}
