#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
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

	int n; cin >> n;
	vi a(n);
	for (auto &x : a)cin >> x;

	int cur = a[0];
	for (int i = 1; i < n; i++) {

		cur = __gcd(cur, a[i]);

		if (cur != a[i]) {
			cout << -1 << endl;
			return;
		}

	}

	for (auto x : a)cout << x << " ";
	cout << endl;

}




int32_t main()
{


	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}