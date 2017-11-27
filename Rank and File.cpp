#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<utility>
using namespace std;
vector<vector<int> > vec;
vector<vector<int> > result;

bool myfunc(vector<int> a,vector<int> b)
{
	int len = a.size();
	cout<<"\n vector a : ";for(int i=0;i<len;i++)cout<<a[i]<<" ";
	cout<<"vector b : ";for(int i=0;i<len;i++)cout<<b[i]<<" ";cout<<endl;
	for(int i=0;i<len;i++)
	{
		if(a[i] < b[i])return true;
		else if(a[i] > b[i])return false;
	}
	return true;
}

int main()
{
    ifstream f1;
    ofstream f2;
    f1.open("input.in");
    f2.open("output.out");
    int c=1,t,x,r,col,n;
    string arr;
    f1>>t;
    while(c<=t)
    {
               f2<<"Case #"<<c++<<": ";
               f1>>n;
               x = 2*n;
               vector<int> temp;
               for(int i=1;i<x;i++)
               {
               	cout<<"row no. : "<<i<<endl;
               		for(int j=0;j<n;j++)
               		{
               			f1>>col;
               			temp.push_back(col);
               		}
               		vec.push_back(temp);
               		temp.clear();
               }
               cout<<"\n final length : "<<vec.size()<<endl;
               sort(vec.begin() , vec.end() , myfunc);
               cout<<"\n sorted : \n";
               for(int i=0;i<vec.size();i++)
               {
               	for(int j=0;j<n;j++)cout<<vec[i][j]<<" ";cout<<endl;
               	
               }
               
               for(int i=0;i<n;i++)
               {
               		temp.clear();
			   		for(int j=0;j<n;j++)
               		{
               			temp.push_back(-1);
               		}
               		vec.push_back(temp);
               }
               
               pair<int,int> one;
               pair<int,int> two;
               
               one.first  = one.second = two.first = two.second = 0;
               
               for(int i=0;i<n;i++)
               {
               	
               }
	}
    f1.close();
    f2.close();
    //system("pause");
    return 0;
}
