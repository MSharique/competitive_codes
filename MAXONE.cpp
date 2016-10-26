#include<bits/stdc++.h>
using namespace std;

vector<int> maxone(vector<int> &A, int B) {
    
    int i = 0 , j = 0 , len = A.size();
    int cnt = 0 , ans = INT_MIN , a, b;
    bool stop = false; 
    while(j<len)
    {
    	if(A[j]==1)j++;
    	else 
    	{
    		j++ ;
    		cnt++;
    	}
    	
    	if(cnt > B)
    	{
    		while(A[i]==1 && i<j)i++;
    		if(i<j)cnt-- , i++;
    		else if(i==j)
    		{
    			if(A[i]==0)i++ , j++;
    		}
    	}
    	if(j-i > ans)
    	{
    		ans = j-i;
    		a = i;
    		b = j;
    	}
    }
	
	vector<int> ret;
	if(a==b)ret.push_back(a);
	else
	{
		for(;a<b;a++)ret.push_back(a);	
	}
    return ret;
    
}

int main()
{
	int n,te;
	vector<int > vec;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>te;
		vec.push_back(te);
	}
	cin>>te;
	vector<int> ans = maxone(vec,te);
	cout<<"\n ans : ";
	for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}

