#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> fir , sec;
int len1 , len2;
double calc_median(int imin,int imax)
{
//	int l1 = 0 , l2 = 0 ,r1 = len1-1 , r2 = len2-1 , m1 ,m2;
	int i = (imin + imax)/2;
	int j = ( (len1  + len2 + 1) / 2 ) - i;
	if(sec[j-1] > fir[i])
		double x = calc_median(i+1 , imax);
	else if( fir[i-1] > sec[j])
		double x = calc_median(imin , i-1);
	else
	{
		if( (len1 + len2)%2 == 1)
		{
			return max( fir[i-1] , sec[j-1] );
		}
		else 
			return ( max( fir[i-1] , sec[j-1]) + min( fir[i] , sec[j]) ) / 2.0;
	}	
}


int main()
{
	int temp;
	cin>>len1;
	for(int i=0;i<len1;i++)
	{
		cin>>temp;
		fir.push_back(temp);
	}
	cin>>len2;
	for(int i=0;i<len2;i++)
	{
		cin>>temp;
		sec.push_back(temp);
	}
	double ans = calc_median(0,len1);
	cout<<"\n median = "<<ans;
}
