#include <bits/stdc++.h>
#include<fstream>
using namespace std;

typedef long long ll;
typedef long double ld;

const int n_ = 1e5 + 1000;
const ld PI = acos(-1.0);

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

int main() {
		ifstream f1;
		ofstream f2;
		f1.open("input.in");
		f2.open("output.out");
	int t;
	//cin>>t;
	f1>>t;
	while(t--)
	{
	//	cin>>n;
		f1>>n;
		for(int i = 0; i < n; i++) {
			ll r, h;
	//		cin >> r >> h;
			f1>>r>>h;
			a[i].first = r * r * h;
			a[i].second = -i;
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++) {
			int idx = -a[i].second;
		    ll curr = a[i].first;
			dp[idx] = query(0, idx) + curr;
			update(idx, dp[idx]);
		}
	//    cout << fixed << setprecision(9);
	//	cout << PI * query(0, n) << endl;
	    f2 << fixed << setprecision(9);
		f2 << PI * query(0, n) << endl;
	/*		
		for(int i=0;i<4*n;i++)
		{
			dp[i] = 0;
			q[i] = 0;
			a[i].first = 0;
			a[i].second = 0;
		}*/
	}
	f1.close();
	f2.close();
	return 0;
}				
