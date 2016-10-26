/*Problem stmt
http://codeforces.com/problemset/problem/629/D

Solution
http://codeforces.com/blog/entry/43227

Code
http://beepaste.ir/view/279d0c61
*/


#include <bits/stdc++.h>

using namespace std;

#define MohammadAmin main()
#define mpair make_pair
#define endl "\n"
#define c_false ios_base::sync_with_stdio(false); cin.tie(0)
#define pushb push_back
#define pushf push_front
#define popb pop_back
#define popf pop_front
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define X first
#define Y second
#define ashar(a) cout << fixed << setprecision((a))
#define reset(a,b) memset(a, b, sizeof(a))
#define for0(a, n) for (int (a) = 0; (a) < (n); (a)++)
#define for1(a, n) for (int (a) = 1; (a) <= (n); (a)++)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;

const int INF = 0x3f3f3f3f, MOD = 1e9 + 7;
const int n_ = 1e5 + 1000;
const ld PI = acos(-1.0);
ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

int n;
ll q[4 * n_], dp[n_];
pair<ll, int> a[n_];

void update(int idx, ld x, int id = 1, int b = 0, int e = n) {
	if (idx < b || idx >= e) return;
	if (idx == b && e - b == 1) {
		q[id] = dp[b] = x;
		return;
	}
	int mid = b + e >> 1, l = id << 1, r = l | 1;
	if (idx < mid) {
		update(idx, x, l, b, mid);
	}else{
		update(idx, x, r, mid, e);
	}
	q[id] = max(q[l], q[r]);
}

ll query(int ql, int qr, int id = 1, int b = 0, int e = n) {
	if (ql >= e || qr <= b) return 0;
	if (ql <= b && e <= qr) return q[id];
	int mid = b + e >> 1, l = id << 1, r = l | 1;
	return max( query(ql, qr, l, b, mid), query(ql, qr, r, mid, e) );
}

int main {
	//c_false;
	cin>>n;
	for(int i = 0; i < n; i++) {
		ll r, h;
		cin >> r >> h;
		a[i].X = r * r * h;
		a[i].Y = -i;
	}
	sort(a, a+n);
	for(int i = 0; i < n; i++) {
		int idx = -a[i].Y;
	    ll curr = a[i].X;
		dp[idx] = query(0, idx) + curr;
		update(idx, dp[idx]);
	}
	ashar(9);
	cout << PI * query(0, n) << endl;
	return 0;
}				