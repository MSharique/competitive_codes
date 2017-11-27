#include<bits/stdc++.h>
using namespace std;

long long int arr[41];

int main()
{
	int t,n,k;
	long long int budget = 5000000;
	cin>>t;
	while(t--)
	{
		k = 0;
		while(cin>>n)
		{
			if(n==0)break;
			arr[k++] = n;
		}
		sort(arr,arr+k);
	//	cout<<"\n sorted arr : ";
	//	for(int i=0;i<k;i++)cout<<arr[i]<<" ";cout<<endl;
		for(int i=k-1,j=1;i>=0;i--,j++)
		{
	//		cout<<"arr["<<i<<"] = "<<arr[i]<<" and power  = "<<j<<endl;
			long long int temp = 1;
			int x = j;
			while(x--)temp = temp * arr[i];
	//		cout<<"Multiply by 2 : "<<temp<<endl;
			temp = temp * 2;
			arr[i] = temp;
	//		cout<<"end value : "<<arr[i]<<" and comp with "<<temp<<endl<<endl;
		}
		
		long long int sum = 0;
		for(int i=0;i<k;i++)sum += arr[i];
		
		if(sum>budget)cout<<"Too expensive\n";
		else cout<<sum<<endl;
	}
	return 0;
}
