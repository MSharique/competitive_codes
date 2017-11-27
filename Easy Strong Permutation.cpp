#include <iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

int arr[100003];
int arr1[100003];

int main()
{
    //cout << "Hello World!" << endl;
    int t,n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    t = 0;
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
    	arr1[t++] = arr[i];
    	arr1[t++] = arr[j];
    }
    if(i==j)arr1[t++] = arr[i];
    //cout<<"\n i : "<<i<<" , j= "<<j<<endl;
    //cout<<"\n special sort : ";
    //for(int i=0;i<t;i++)cout<<arr1[i]<<" ";cout<<endl;
	int sum = 0;
	for(int i=1;i<t;i++)
    {
    	sum = sum + abs(arr1[i] - arr1[i-1]);
    	//cout<<"\n diff of ("<<arr1[i]<<" , "<<arr1[i-1]<<") \n";
    }
    sum = sum + abs(arr1[0]-arr1[t-1]);
    cout<<sum<<endl;
	return 0;
}

