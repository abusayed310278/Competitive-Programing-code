#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back
#include <map>

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

void solve() {

	int n, x; cin >> n >> x;

	map<int, int>m;
	int mx = 0;

	for (int i = 0; i < n; i++) {

		int b; cin >> b;
		m[b]++;
		mx = max(mx, m[b]);

	}

	int op = 0;
	for (auto a : m) {

		int key = a.first;
		int val = a.second;

		int cnt = val;
		if (x != 0)cnt += m[key ^ x];
		int f = m[key ^ x];

		if (cnt > mx) {
			mx = cnt;
			op = f;
		} else if (cnt == mx) {
			op = min(op, f);
		}

	}


	cout << mx << " " << op << endl;



}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();


	}

	return 0;
}