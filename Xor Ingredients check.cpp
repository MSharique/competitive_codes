// @adi28galaxyak
// Content: Xor Ingredients
 
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

vi oil_q;
const int LOGN = 21, MAX = 1e5;
int dp[MAX+5][LOGN];
int c_sort[MAX+5] = {0};

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("6.in", "r", stdin);
    //     freopen("100.out", "w", stdout);
    // #endif // ONLINE_JUDGE

	// clock_t startime = clock();
	ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	
	int n, x, y, q;
	//scanf("%d %d", &n, &q);
	f2>>n>>q;
	//assert(n>=2 and n<=100000);
	//assert(q>=1 and q<=1000000);

	rep(i,0,n){
	//	scanf("%d", &x);
		f2>>x;
		oil_q.pb(x);
		//assert(oil_q.back()>=1 and oil_q.back()<=100000);

		dp[0][i] = i; // initialization
	}

	// Sparse table
	int logn = (int)floor(log2(n)) + 1;
	for(int j=1;j<logn;j++){
		rep(i,0,n){
			if(i+(1<<j) <= n){
				if(oil_q[dp[j-1][i]] > oil_q[dp[j-1][i+(1<<(j-1))]])
					dp[j][i] = dp[j-1][i+(1<<(j-1))];
				else if(oil_q[dp[j-1][i]] == oil_q[dp[j-1][i+(1<<(j-1))]])
					dp[j][i] = min(dp[j-1][i], dp[j-1][i+(1<<(j-1))]);
				else
					dp[j][i] = dp[j-1][i];
			}
			else break;
		}
	}

	vi P(21);
	rep(i,0,21) P[i] = (1<<i);

	vi K(n+5);
	K[0] = -1; // assume as -inf
	rep(i,1,n+1) {
		if((i&(i-1))==0) K[i] = K[i-1]+1;
		else K[i] = K[i-1];
	}

	int l, k;

	while(q--){
		//scanf("%d %d", &x, &y);
		f2>>x>>y;
		//assert(x>=1 and x<=n);
		//assert(y>=x and y<=n);
		x--;y--;

		l = y-x+1;
		k = K[l];
		if(oil_q[dp[k][x]] < oil_q[dp[k][x+l-P[k]]]) {
			c_sort[dp[k][x]]++;
		}
		else if(oil_q[dp[k][x]] == oil_q[dp[k][x+l-P[k]]]) {
			c_sort[min(dp[k][x], dp[k][x+l-P[k]])]++;
		}
		else c_sort[dp[k][x+l-P[k]]]++;
	}


	rep(i,0,MAX+1){
		while(c_sort[i]>0){
		//	printf("%d ", i+1);
			f1<<i+1<<" " ;
			c_sort[i]--;
		}
	}
	// cout << double( clock() - startime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
	f1.close();
	f2.close();
	return 0;
}
