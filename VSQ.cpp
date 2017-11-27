#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int arr[100003];

int myfunc(int start, int end, int k)
{
	cout<<"\n range : ( "<<start<<" , "<<end<<" )\n";
      int middle = (start+end)/2;
      if(arr[middle] >= k  &&  arr[middle-1]  <=  k)
          return middle;
      else if(arr[middle] > k  &&  arr[middle-1] > k)
          return myfunc(start, middle, k);
      else
          return myfunc(middle, end, k);
  }
  
int main()
{
	int n,q,a,b;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	cout<<"\n sorted sequence : ";
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
	cin>>q;
	while(q--)
	{
		cin>>a>>b;
		int st,end;
		//for(st=0;arr[st]<a;st++);
		//for(end=n-1;arr[end]>b;end--);
		st = myfunc(0,n-1,a);
		if(arr[st]==a)st--;
		cout<<"\n first : "<<st<<endl;
		end = myfunc(0,n-1,b);
		cout<<"\n st = "<<st<<" and and end = "<<end<<endl;
		end = end - st + 1;
		cout<<end<<endl;
	}
	return 0;
}
