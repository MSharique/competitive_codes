#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<climits>
using namespace std;

vector<pair< pair<int , int > , int > > vec;
//vector<pair<int,int> > vecy;
//vector<pair<int,int> > vecx;
vector<int> vec_ini(200003,-1);
vector<int> vec_last(200003,-1);
//vector<int > vec_chain;
//int arr[100003];
int inside[200003];
//long long int ans = 0;

/*long long int func(int x)
{
	if(vec_chain[x].size()==0)return 0; 
	long long int temp = vec_chain[x].size();
	for(set<int> :: iterator it = vec_chain[x].begin();it!=vec_chain[x].end();it++)
	{
		temp = temp + func(*it);
	}
	return temp;
}*/
bool myfunc(pair<pair<int,int> ,int> a , pair<pair<int,int> ,int> b )
{
	if(a.first.first < b.first.first)return true;
	else if(a.first.first == b.first.first)
	{

		if(a.first.second < b.first.second)return true;
		else return false;	
	}
	else return false;
}

int main()
{
	int t,n,x,y,poly,ymin,ymax,xmin,xmax;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&poly);
		for(int k=0;k<poly;k++)
		{
/*			ymin = INT_MAX;
			ymax = INT_MIN;
			xmin = INT_MAX;
			xmax = INT_MIN;
*/			scanf("%d",&n);
			for(int i=0;i<n;i++)
			{
				scanf("%d%d",&x,&y);
/*				ymin = min(ymin,y);
				ymax = max(ymax,y);
				xmin = min(xmin,x);
				xmax = max(xmax,x);
*/				vec.push_back(make_pair( make_pair(x,y) , k) );
			}
//			vecy.push_back(make_pair(ymin,ymax));
//			vecx.push_back(make_pair(xmin,xmax));
		}
//	cout<<"\n vec : \n";
//	for(int i=0;i<vec.size();i++)cout<<vec[i].first.first<<"  . " <<vec[i].first.second<<" , no = "<<vec[i].second<<endl;
	sort(vec.begin(),vec.end(),myfunc);
//	cout<<"\n vec : \n";
//	for(int i=0;i<vec.size();i++)cout<<vec[i].first.first<<"  . " <<vec[i].first.second<<" , no = "<<vec[i].second<<endl;
//	cout<<"\n vec  with max-min y-coordinates : \n";
//	for(int i=0;i<vecy.size();i++)cout<<vecy[i].first<<"  . " <<vecy[i].second<<endl;
//	cout<<"\n vec  with max-min X-coordinates : \n";
//	for(int i=0;i<vecx.size();i++)cout<<vecx[i].first<<"  . " <<vecx[i].second<<endl;
	
	for(int i=0;i<vec.size();i++)
	{
		if(vec_ini[vec[i].second]==-1)vec_ini[vec[i].second]=i;
		vec_last[vec[i].second]=i;	
	}
//	cout<<"\n vec  with initial index : \n";
//	for(int i=0;i<poly;i++)cout<<vec_ini[i]<<endl;
//	cout<<"\n vec  with final index : \n";
//	for(int i=0;i<poly;i++)cout<<vec_last[i]<<endl;
	x =  0;
	for(int i=0;i<vec.size();i++)
	{
//		cout<<"\n in main loop \n";
/*		if(vec_ini[vec[i].second]==i)
		{
			vec_chain.push_back(vec[i].second);
		}
		else*/ if(vec_last[vec[i].second]==i)
		{
			/*int j = 0;
			int len = vec_chain.size();
			while(vec_chain[j]!=vec[i].second && j<len)
			{
				inside[vec_chain[j]]++;
				j++;
			}*/
//			vec_chain.erase(vec_chain.begin()+j);
			inside[vec[i].second] = x;
			x++;
		}
//		cout<<"\n vec chain at index i = "<<i<<endl;
//		for(int j=0;j<vec_chain.size();j++)cout<<vec_chain[j]<<" ";cout<<endl; 
	}
	
//	cout<<"\n vec chain : \n";
/*	for(int i=0;i<poly;i++)
	{
		cout<<" for "<<i<<" - > ";
		for(set<int>  :: iterator it = vec_chain[i].begin();it!=vec_chain[i].end();it++)cout<<*it<<" ";cout<<endl;
	}
	
*/
//	ans = 0;
	for(int i=0;i<poly;i++)
	{
		printf("%d ",inside[i]);
		inside[i]=0;
	}
	printf("\n");
//	cout<<ans<<endl;
	vec.clear();
//	vecy.clear();
	vec_ini.clear();
//	vec_chain.clear();
	for(int i=0;i<poly;i++)
	{
		vec_ini[i] = -1;
		vec_last[i] = -1;
	}
//	cout<<"\n doubt \n";
//	for(int i=0;i<poly;i++)cout<<vec_ini[i]<<" ";cout<<endl;
	}
	return 0;
}
