#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
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

int msb(int x) {

	int c = 0;
	while (x != 0) {
		x /= 2;
		c++;
	}
	return c;

}

void solve() {

	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	unordered_map<int, int>m;
	for (auto x : a)++m[msb(x)];

	int ans = 0;
	for (auto it : m) {
		ans += (it.second * (it.second - 1LL)) / 2LL;
	}

	cout << ans << endl;

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