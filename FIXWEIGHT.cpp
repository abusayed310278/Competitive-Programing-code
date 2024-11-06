#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define lli long long
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

	int n, x; cin >> n >> x;

	for (int l = 1; l <= n; l++) {

		if ( (x % l == 0) and (n - l + 1) >= (x / l)) {
			cout << "YES\n"; return;
		}

	}

	cout << "NO\n";

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