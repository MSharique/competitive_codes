#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int arr[100003]; 
 
int main() 
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		int startIndex = 0, endIndex = 0;
	    int index;
	    int currStartIndex = 0;
	 
	    long long int maxSum = INT_MIN;
	    long long int currentSum = 0;
	 
	    for(index = 0 ; index < n; index++)
		{
			currentSum  = currentSum + arr[index];
	        if(currentSum > maxSum)
			{
	            maxSum = currentSum;
	            endIndex = index;
	            startIndex = currStartIndex;
	        }
	        if(currentSum < 0)
			{
	            currStartIndex = index + 1;
	            currentSum = 0;
	        }
	    }
//	    cout<<"\nMaximum Sum : "<<maxSum<<endl;
//	    cout<<"\nBetween ("<<startIndex<<", "<<endIndex<<")\n";
	    index  = 0;
		if(startIndex!=endIndex)
		{
			index = arr[startIndex];
			for(int i=startIndex;i<=endIndex;i++)index = min(index,arr[i]);
		}
		long long int ans1 = maxSum - index;
		long long int ans2 = INT_MIN , ans3 = INT_MIN , ans2_2 = INT_MIN , ans3_2 = INT_MIN;
//		cout<<"\n sum after deleting min from maxsumSubarray : "<<ans1<<endl;
		if(endIndex+1 < n)
		{
			long long int sum=INT_MIN , temp=0 , msum=0 ;
			int mn1 = INT_MAX;
			for(int i=endIndex+1;i<n;i++)
			{
				temp = temp + arr[i];
				if(temp > sum)
				{
					sum = temp;
				}
				mn1 = min(mn1 , arr[i]);
			}
			ans2 = maxSum + sum;
			ans2_2 = ans2 - mn1;
			ans2 = max(ans2,ans2_2); 
		}
//		cout<<"\n sum from right part : "<<ans2<<endl;
		if(startIndex-1 >=0 )
		{
			long long int sum=INT_MIN , temp=0 , msum=0 ;
			int mn2 = INT_MAX;
			for(int i=startIndex-1;i>=0;i--)
			{
				temp = temp + arr[i];
				if(temp > sum)
				{
					sum = temp;
				}
				mn2 = min(mn2 , arr[i]);
				//cout<<"\n i m in loop ";
			}
//			cout<<"before ans3 n ew have : maxSum = "<<maxSum<<" , sun = "<<sum<<endl;
			ans3 = maxSum + sum;
			ans3_2 = ans3 - mn2;
			ans3 = max(ans3,ans3_2);
		}
//		cout<<"\n sum from left part : "<<ans3<<endl;
		ans1 = max(maxSum,ans1);
		ans2 = max(ans2,ans3);
		ans1 = max(ans1,ans2);
		cout<<ans1<<endl;
	}
    return 0;
}
 

