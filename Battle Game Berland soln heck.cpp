// @adi28galaxyak
// Content: Battle Game Berland
 
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

const int MAX = 1e6; 
vector<bool> seen_p(MAX+5, false);
vi v(MAX+5), elem, p;
vi ans(MAX+5, 0);
int n;

vector<bool> seen(MAX+5, false); //gives me all prime numbers

void seive(){
	seen[0] = seen[1] = true;
	rep(i,0,MAX+1) v[i] = i; 
	for(int i = 4;i<=MAX;i+=2) {
		seen[i] = true;
	}
	for(int i = 3;i<=sqrt(MAX);i+=2){
		if(seen[i]==false){
			int j = i*i;
			while(j<=MAX){
				seen[j] = true;
				j+=i;
			}
		}
	}
	rep(i,0,n) {
		if(seen[elem[i]]==false) {
			int j = 2;
			while(elem[i]*j<=MAX){
				v[elem[i]*j] = min(v[elem[i]*j], elem[i]);
				j++;
			}
		}
	}
}

int main(){
//	NITRO;
	// #ifndef ONLINE_JUDGE
 //        freopen("5.in", "r", stdin);
 //        // freopen("6.out", "w", stdout);
 //    #endif // ONLINE_JUDGE
 //    clock_t startime = clock();
ofstream f1;
	ifstream f2;
	f1.open("output.out");
	f2.open("input.in");
	int x;
//	cin>>n;
	f2>>n;

	rep(i,0,n){
	//	cin>>x;
		f2>>x;
		elem.pb(x);
		seen_p[x] = true;
	}
	seive();

	int count = 0;
	rep(i,0,n){
		if(seen[v[elem[i]]]==false) ans[v[elem[i]]]++;
		if(seen[elem[i]]==false) count++;
	}
	cout<<count<<"\n";
	f1<<count<<"\n";
	rep(i,0,MAX+1){
		if(ans[i]) 
		{
			cout<<i<<" "<<ans[i]<<"\n";
			f1<<i<<" "<<ans[i]<<"\n";
		}
	}
		// cout << double( clock() - startime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
	f1.close();
	f2.close();
	return 0;
}
