#include<bits/stdc++.h>
using namespace std;

int arr[100003];
int MOD;

bool myfunc(int a,int b)
{
	int ma = a % MOD;
	int mb = b % MOD;
    if (ma<mb) return true;
    else if (ma>mb) return false;
    
    if (a%2 && b%2) return (a > b);
    if (a%2==0 && b%2==0) return (a < b);
    
    return (a%2);

}

int main()
{
	int n,m;
	//cout<<"lets go eith this : "<<-0%1<<endl;
	while(cin>>n>>MOD)
	{
		if(n==MOD && MOD==0)
		{
			cout<<n<<" "<<MOD<<endl;
			break;
		}
		for(int i=0;i<n;i++)cin>>arr[i];
		
		sort(arr,arr+n,myfunc);
		
		cout<<n<<" "<<MOD<<endl;
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<endl;
		}
	}
	return 0; 
}
