// @adi28galaxyak
// Content: Sort Movies 1
 
#include <cstdio>
#include <cmath>
#include <iostream> 
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cassert>
#include <string>
#include <cstring>
#include <queue>
#include <fstream>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vii;
typedef pair<int, int> pii;
#define FF first
#define SS second
#define pb(v) push_back(v)
#define mp(x,y) make_pair(x, y)
#define min(a, b) (a>b?b:a)
#define max(a, b) (a>b?a:b)
 
#define NITRO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define s(n) scanf("%d",&n)
#define rep(i,start,end) for(int i = start;i<end;i++)

const int MAX = 1e5;
vector< set<int> > movies(MAX+5);
vi v(MAX+5);
map<int, int> M; 
int n, x, y;
vi ans;

int choose(set<int> &A, int X, int len){
	set<int>::iterator low;
	low = A.lower_bound(X);

	int val;
	if(low==A.end()) val = *(A.rbegin());
	else val = *low;
	A.erase(val);
	return val;
}

int main(){
	//NITRO;
    // #ifndef ONLINE_JUDGE
    //     freopen("3.in", "r", stdin);
    //     // freopen("6.out", "w", stdout);
    // #endif // ONLINE_JUDGE
    // clock_t startime = clock();

	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	int tt;
	//cin>>tt;
	f2>>tt;
	//assert(tt>=1 and tt<=20);

	while(tt--){
		M.clear();
		ans.clear();

		//cin>>n>>x>>y;
		f2>>n>>x>>y;
		//assert(n>=1 and n<=MAX);
		//assert(x>=0 and x<=n-1);
		//assert(y>=0 and y<=n-1);

		rep(i,0,n){
		//	cin>>v[i];
			f2>>v[i];
			//assert(v[i]>=1 and v[i]<=1e9);

			M[v[i]]+=1;
			movies[i].clear();
		}
		movies[n].clear(); // There can be 1 element at nth row

		for(auto it: M){
			movies[it.SS].insert(it.FF);
		}

		for(int i = n;i>=0;i--){
			int len = movies[i].size();
			
			while(len){
				ans.pb(choose(movies[i], ((x+y)>>1), len));
				x+=7;
				while(x>=n-1) x-=n-1;
				y+=11;
				while(y>=n) y-=n;
				len-=1;
			}
		}

		for(auto it: ans){
		//	cout<<it<<" ";
			f1<<it<<" ";
		}
	//	cout<<"\n";
		f1<<"\n";
	}
	// cout << double( clock() - startime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
	f1.close();
	f2.close();
}
