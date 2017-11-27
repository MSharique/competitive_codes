#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	long long int mx = 0;
    for(long long int i=1;i<100000;i++)
    {
    //	f2<<i<<"\t";
    	for(long long int j=1;j<i;j++)
    	{
    		if(i%j != 0)
    		{
    			mx = max(mx,j);
    //			f2<<j<<endl;
    			break;
    		}
    	}
    }
	for(long long int i=100000;i<1000000000;i++)
    {
    	//f2<<i<<"\t";
    	for(long long int j=1;j<i;j++)
    	{
    		if(i%j != 0)
    		{
    			mx = max(mx,j);
				break;
    		}
    	}
    }
	for(long long int i=1000000000;i<1000000000000;i++)
    {
    	for(long long int j=1;j<i;j++)
    	{
    		if(i%j != 0)
    		{
    			mx = max(mx,j);
    			break;
    		}
    	}
    }
	for(long long int i=1000000000000;i<1000000000000000;i++)
    {
    	for(long long int j=1;j<i;j++)
    	{
    		if(i%j != 0)
    		{
    			mx = max(mx,j);
    			break;
    		}
    	}
    }
    for(long long int i=1000000000000000;i<=100000000000000000;i++)
    {
    	
    	for(long long int j=1;j<i;j++)
    	{
    		if(i%j != 0)
    		{
    			mx = max(mx,j);
				break;
    		}
    	}
    }
	
	//f2.close();
    //system("pause");
    return 0;
    }
