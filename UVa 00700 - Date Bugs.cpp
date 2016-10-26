#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

int main() 
{
	int n, c = 1;
    while(cin>>n)
	{
		if(n==0)break;
        int arr[25], year[25], a[25], b[25];
        int it, max_year = 0;
        for(int i = 0; i < n; i++)
		{
			cin>>year[i]>>a[i]>>b[i];
            arr[i] = b[i]-a[i];
            max_year = max(max_year , year[i]);
        }
        //cout<<"\n all input done with max_year = "<<max_year<<endl;
        while(max_year<10000)
		{
			for(it=0;it<n;it++)
			{
                if((max_year-year[it])%arr[it] != 0)break;
            }
            if(it == n)break;
            max_year++;
        }
        cout<<"Case #"<<c++<<":\n";
        if(max_year == 10000)cout<<"Unknown bugs detected."<<endl<<endl;
        else cout<<"The actual year is "<<max_year<<".\n\n";
    }
    return 0;
}
