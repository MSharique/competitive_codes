#include <bits/stdc++.h>
using namespace std;

vector< pair<int,int> > vec(100003);
map<pair<int,int> , int> slpe;
map<pair<int,int> , int> :: iterator it;

int main()
{
//    cout << "Hello World!" << endl;
	int n,a,b,c,m,q;
	scanf("%d",&n);
	scanf("%d%d%d",&a,&b,&c);
	c = __gcd(a,b);
	a = a/c ;
	b = b/c;
	vec[1].first = a;
	vec[1].second = b;
	slpe.insert(make_pair(make_pair(a,b) , 1));
	for(int i=2;i<=n;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		c = __gcd(a,b);
		a = a/c;
		b = b/c;
		vec[i].first = a;
		vec[i].second = b;
		it = slpe.find(make_pair(a,b));
		if(it != slpe.end())slpe.insert(make_pair(make_pair(a,b) , 1));
		else it->second++;
	}
	cout<<"\n all slopes : \n";
	for(int i=1;i<=n;i++)cout<<vec[i].first<<" , " <<vec[i].second<<endl;
	cin>>q;
	while(q--)
	{
		cin>>m;
		c = 0;
	//	cout<<vec[m].size()<<endl;
		a = vec[m].first;
		b = vec[m].second;
		it = slpe.find(make_pair(-b,a));
		if(it!=slpe.end())c = it->second;
		it = slpe.find(make_pair(b,-a));
		if(it!=slpe.end())c = c + it->second;
		cout<<c<<endl;
	}
	vec.clear();
	slpe.clear();
	//sl_den.clear();
	return 0;
}

