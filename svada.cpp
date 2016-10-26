#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;

int ak[101],bk[101],ck[101],dk[101];

int fir(int time,int no)
{
	int ans = 0;
	//cout<<"\n time in fir "<<time<<" , no "<<no<<endl;
	for(int i=0;i<no;i++)
	{
	//	cout<<"\n ak["<<i<<"] "<<ak[i]<<" , bk["<<i<<"] = "<<bk[i]<<endl;
		int temp = 0;
		if(ak[i] > time)temp = 0;
		else
		{
			temp = 1;
			//time = time - ak[i];
			temp = temp + (time - ak[i])/bk[i];
	//		if(time%bk[i]==0)ans++;
		}
		ans = ans + temp;
	}
	return ans;
}
int sec(int time,int no)
{
	int ans = 0;
	for(int i=0;i<no;i++)
	{
		int temp = 0;
		if(ck[i] > time)temp = 0;
		else
		{
			temp = 1;
			//time = time - ck[i];
			temp = temp + (time - ck[i])/dk[i];
	//		if(time%dk[i]==0)ans++;
		}
		ans = ans + temp;
	}
	return ans;
}
int main()
{
	int t,n,m;
/*	ifstream f1;
	ofstream f2;
	f1.open("input.in");
	f2.open("output.out");
*/	cin>>t>>n;
	for(int i=0;i<n;i++)cin>>ak[i]>>bk[i];
	cin>>m;
	for(int i=0;i<m;i++)cin>>ck[i]>>dk[i];
	
//	f1>>t>>n;
	//cout<<"\n t = "<<t<<" , n = "<<n<<endl;
//	for(int i=0;i<n;i++)f1>>ak[i]>>bk[i];
	//cout<<"\n ak , bk pair : \n";
	//for(int i=0;i<n;i++)cout<<ak[i]<<" " <<bk[i]<<endl;
//	f1>>m;
	//cout<<"\n m= "<<m<<endl;
//	for(int i=0;i<m;i++)f1>>ck[i]>>dk[i];
	int l = 1, r = t;
	while(l+1<r)
	{
		//cout<<"\n l = "<<l<<" , r = "<<r<<endl;
		int mid = (r+l)/2;
		int first = fir(mid,n);
		int second =  sec(t-mid , m);
		//cout<<"\n at time "<<mid<<" , first = "<<first<<" , second = "<<second<<endl;
		if(first <= second)l=mid;
		else r = mid;
	}
	cout<<l<<endl;
//	f2<<l<<endl;
//	f1.close();
//	f2.close();
	return 0;
}
