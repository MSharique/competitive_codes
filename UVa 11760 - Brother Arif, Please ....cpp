#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> row;
vector<int> col;
int r,c;

bool issafe(int x,int y)
{
	//cout<<"looking for : ("<<x<<" , "<<y<<")\n";
	if(x>=r || x<0)return false;
	if(y>=c || y<0)return false;
	if(binary_search(row.begin(),row.end(),x))return false;
	if(binary_search(col.begin(),col.end(),y))return false;
	return true;
}

int main()
{
	int n,x,y,xa,ya,cs=1;
	while(cin>>r>>c>>n)
	{
		if(r==0 && c==0 && n==0)break;
		for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			row.push_back(x);
			col.push_back(y);
		}
		sort(row.begin(),row.end());
		sort(col.begin(),col.end());
		/*cout<<"\n restricted ROWS are : ";
		for(int i=0;i<row.size();i++)cout<<row[i]<<" ";cout<<endl; 
		cout<<"\n restricted COL are : ";
		for(int i=0;i<col.size();i++)cout<<col[i]<<" ";cout<<endl; 
		*/cin>>xa>>ya;
		bool res = false;
		if(!res)res = issafe(xa,ya);
		if(!res)res = issafe(xa+1,ya);
		if(!res)res = issafe(xa-1,ya);
		if(!res)res = issafe(xa,ya+1);
		if(!res)res = issafe(xa,ya-1);
		cout<<"Case "<<cs++<<":";
		if(res)cout<<" Escaped again! More 2D grid problems!\n";
		else cout<<" Party time! Let's find a restaurant!\n"; 
		row.clear();
		col.clear();
	}
}
