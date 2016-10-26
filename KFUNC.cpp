#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> vec;

int main()
{
	int t,a,d,num,z;
	long long int l,r,x,temp;
	cin>>t;
	while(t--)
	{
		cin>>a>>d>>l>>r;
		a = a%9;
		d = d%9;
		temp = 0;
		if(a==0)
		{
			vec.push_back(9);
			temp = 9;
			num =  ( 9 + d ) % 9;
		}
		else
		{
			vec.push_back(a);
			temp = a;
			num = ( a + d ) %9;
		}
		if(num==0)num = 9;
		while(num != vec[0])
		{
			vec.push_back(num);
			temp = temp + num;
			num = ( (num%9) + d ) %9 ;
			if(num==0)num=9;
		}
		int len = vec.size();
		//cout<<"\n vector : ";
		//for(int i=0;i<len;i++)cout<<vec[i]<<" ";cout<<endl;
		if(l==r)
		{
			temp = l-1;
			z = temp % len;
			if(z < 0)z = z + len;
			cout<<vec[z]<<endl;
		}//cout<<vec[l-1]<<endl;
		else {
		
			l = l - 1  ;
			r = r - 1;
			x = r-l;
			x = x-1;
			z = x%len;
			x = x/len;
			//cout<<"\n x  = "<<x<<" , z = "<<z<<endl;
			temp = 0;
			for(int i=0;i<len;i++)temp = temp + vec[i];
			//cout<<"\n sum of vec = "<<temp<<endl;
			l = l%len;
			r = r%len;
			temp = temp * x;
			//cout<<"\n loop sum = "<<temp<<endl;
			temp = temp + vec[l];
			//cout<<"\n after vec["<<l<<"] .i.e. "<<vec[l%len]<<" is "<<temp<<endl;
			temp = temp + vec[r];
			r = r - 1;
			if(r<0)r = r + len;
			while(z != 0)
			{
				temp = temp + vec[r];
				z = z - 1;
				r = r - 1;
			//	r = r%len;
				if(r<0)r=r+len;
			}
			cout<<temp<<endl; 
		}
			vec.clear();
		
	}
	return 0;
}
