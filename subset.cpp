#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;



/*vector<vector<int> > subsets(vector<int> &S) 
{
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        sort(S.begin(),S.end());
        vector<vector<int> > res;
        int n = S.size();
        for (int i=0;i<pow(2.0,n);i++){
            string str = getbinary(i,n);
            vector<int> ss;
            for (int j=0;j<n;j++){
                if (str[j]=='1'){
                    ss.push_back(S[j]);
                }
            }
            res.push_back(ss);
        }
        return res;
         
    }
*/
vector<int> temp;
vector<vector< int> > ans;
void myfunc(vector<int> vec,vector<int> temp,int it,bool first)
{
	if(it==vec.size())return ;
	cout<<"\n vec from func : ";
	for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";cout<<endl;
	cout<<"\n temp vec : ";
	for(int i=0;i<temp.size();i++)cout<<vec[i]<<" ";cout<<" and first = "<<first<<" , + it = "<<it<<endl;
	if(first)
	{
		ans.push_back(temp);
		myfunc(vec,temp,it,!first);
	}
	else 
	{
		temp.push_back(vec[it]);
		ans.push_back(temp);
		myfunc(vec,temp,it+1,!first);	
	}
}

int main()
{
	int n,a;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);	
	}
	cout<<"\n arr vec : ";
	for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<endl;
	//vector<vector<int > > vec1 =  
	myfunc(arr,temp,0,true);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
		cout<<endl;
	}	
	ans.clear();
	arr.clear();
	temp.clear();
	return 0;
}
