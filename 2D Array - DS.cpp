#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int arr[6][6];
    int ans = 0,sum=0;
    for(int i=0;i<6;i++)
    	for(int j=0;j<6;j++)cin>>arr[i][j];
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    		sum = sum + arr[i][j] + arr[i][j+1] + arr[i][j+2];
    		sum = sum + arr[i+1][j+1];
    		sum = sum + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
    	cout<<"\n sum : "<<sum<<endl;
    	ans = max(ans,sum);
    	sum = 0;
    	}
    }
    cout<<ans;
    return 0;
}

