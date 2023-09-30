#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define F  first
#define S  second
#define pb  push_back

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

	int x, y; cin >> x >> y;

	for (int i = 1; i * i <= y; i++) {

		if ((y % i) != 0)continue;

		int x1 = x / 2;
		int x2 = (x + 1) / 2;

		if ( (y / i < x1) or (i > x2)) {
			cout << x1 << " " << x2 << endl;
			cout << i << " " << y / i << endl;
			return;
		}

	}

	cout << -1 << endl;

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