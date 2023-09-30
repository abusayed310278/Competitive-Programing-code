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

int count(vi &v, int n) {

	int inv = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] > v[j])inv++;
		}
	}
	return inv;

}

void solve() {

	int n, k; cin >> n >> k;
	vi v(n);
	for (int i = 0; i < n; i++)cin >> v[i];

	int inv = count(v, n);
	int ans = k * inv;

	for (int i = 0; i < n; i++) {

		int cnt = 0;

		for (int j = 0; j < n; j++) {

			if (v[j] > v[i])cnt++;
		}

		ans += (k * (k - 1) / 2) * cnt;
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