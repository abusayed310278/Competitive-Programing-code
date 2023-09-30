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
	vi cnt(3);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		cnt[x % 3]++;
	}

	// int ans = 0;
	if ((0 * cnt[0] + 1 * cnt[1] + 2 * cnt[2]) % 3) {
		cout << -1 << endl;
	} else {

		int ans = min(cnt[1], cnt[2]);
		cnt[1] -= ans, cnt[2] -= ans;
		ans += 2 * (cnt[1] / 3 + cnt[2] / 3);
		cout << ans << endl;

	}



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