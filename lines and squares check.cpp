#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define mp make_pair
using namespace std;
bool checkCircle(int x1,int y1,int r,int x2,int y2,int s)
{

	vector< pair<int,int> > points;
	points.pb( mp(x2-s,y2-s));
	points.pb( mp(x2+s,y2-s));
	points.pb( mp(x2-s,y2+s));
	points.pb( mp(x2+s,y2+s));
	bool ret = true;
	int a,b;
	for(int i=0;i<points.size();i++)
	{
		a = (points[i].F - x1);
		b = (points[i].S - y1);
		if(a>r || (( b*b > (r-a)*(r+a) )))
			ret = false;
	}
	return ret;
}
bool checkSquare(int x1,int y1,int s,int x2,int y2,int r)
{
	if(
		(x2-r>=x1)		&&
		(x2+r<= x1+s)	&&
		(y2-r>=y1)		&&
		(y2+r<= y1+s)	)
	{
		return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t,i,j,n,q,left;
	cin>>n;
	vector< pair<int, pair<int, int> > > arr(n);
	for(i=0;i<n;i++)
		cin>>arr[i].S.F >> arr[i].S.S >> arr[i].F;
	cin>>q;
	int x,y,r;
	while(q--)
	{
		cin>>x>>y>>r;
		int c1=0,c2=0;
		for(i=0;i<n;i++)
		{
			if(checkSquare(arr[i].S.F,arr[i].S.S,arr[i].F,x,y,r))
				c1++;
			if(checkCircle(x,y,r,arr[i].S.F,arr[i].S.S,arr[i].F))
				c2++;
		}
		cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}

