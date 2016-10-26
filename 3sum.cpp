#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int dif = INT_MAX;
	int ans = 0;
 
	sort(A.begin(),A.end());
    int len = A.size();
	for (int i = 0; i < len; i++) 
	{
		int j = i + 1;
		int k = len - 1;
		while (j < k) 
		{
			int sum = A[i] + A[j] + A[k];
			cout<<"\n sum = "<<sum<<endl;
			int temp = abs(sum - B);
 			cout<<"\n temp = "<<temp<<endl;
			if(temp == 0) return sum;
 
			if (temp < dif) {
				dif = temp;
				ans = sum;
			}
			if (sum <= B)j++;
			else k--;
			
		}
	}
 
	return ans;
}


int main()
{
	int n,w;
	vector<int> vec;
	cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>w;
    	vec.push_back(w);
    }
    cin>>w;
    cout<<threeSumClosest(vec , w);
    return 0;
}
