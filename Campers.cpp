#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000003];
int main() {

	int n,k,ans,x;
	cin>>n>>k;
	for(int i=0;i<k;i++)cin>>arr[i];
	sort(arr,arr+k);
	//cout<<"\n n = "<<n<<" , k = "<<k<<" , arr[0] : "<<arr[0]<<endl;
	ans = 0;
	int dst = 1;
	//cout<<"\n members selected = "<<ans<<" , strt = "<<dst<<endl;
	for(int i=0;i<k;i++)
	{
		int temp = arr[i] - 2;
	//	cout<<"\n range from "<<dst<<" , to "<<temp<<endl;
		if(temp>=dst)
		{
			x = temp-dst + 1;
			x = (x+1) / 2;
			ans = ans + x;
		}
		dst = arr[i]+2;
	}
	//cout<<"\n range from "<<dst<<" , to "<<n<<endl;
	if(n>=dst)
	{
		x = n-dst + 1;
		x = (x+1) / 2;
		ans = ans + x;
	}
	ans = ans + k;
	cout<<ans;
    return 0;
}

