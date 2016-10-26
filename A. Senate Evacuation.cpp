#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;

int arr[50];
bool check[50];

int main()
{
    ifstream f1;
    ofstream f2;
    f1.open("input.in");
    f2.open("output.out");
    int c=1,t,x,r,col;
    string str;
    f1>>t;
    while(c<=t)
    {
        f2<<"Case #"<<c++<<": ";
    	f1>>x;
    	int sum = 0;
    	for(int i=0;i<x;i++)
    	{
    		f1>>arr[i];
    		sum += arr[i];
    	}
    	r = col = 0;
    	while(sum>0)
    	{
    		for(int i=0;i<x;i++)check[i] = true;
    		sum = sum - 2;
    		r = sum/2;
    		col = 0;
    		for(int i=0;i<x;i++)
    		{
    			if(arr[i]  >=  r)
    			{
    				col++;
    				check[i] = false;
    				str += (char)(i+'A');
    			}
    		}
    		if(col<=2)
    		{
    			f2<<str<<" ";
    			cout<<str<<" ";
    			str ="";
    			int temp = 0,it=0;
    			while(temp!=2 and it<x)
    			{
    				if(!check[it])
    				{
    					arr[it]--;
						temp++;
    				}
    				it++;
    			}
    		}
    		else
    		{
    			sum++;
    			r = sum/2;
    			str = "";
    			for(int i=0;i<x;i++)
    			{
    				if(arr[i] > r )
    				{
    					str = (char)(i+'A');
    					arr[i]--;
    					break;
    				}
    			}
    			f2<<str<<" ";
    			cout<<str<<" ";
    		}
    	}
    	f2<<endl;
    }
    f1.close();
    f2.close();
    //system("pause");
    return 0;
    }
