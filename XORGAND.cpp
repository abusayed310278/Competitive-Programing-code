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

int msb(int n) {

	if (n == 0)return 0;
	int b = 1;

	while (n >> b)b++;
	return b;
}

void solve() {

	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vvi pre(n + 1, vi (32, 0));
	for (int i = 0; i < n; i++) {

		int b = msb(a[i]);

		for (int j = 0; j < 32; j++) {
			pre[i + 1][j] = pre[i][j] + (b == j);
		}
	}



	int q; cin >> q;
	while (q--) {
		int l, r, x; cin >> l >> r >> x;
		int b = msb(x);
		int ans = r - l + 1 - (pre[r][b] - pre[l - 1][b]);
		cout << ans << endl;
	}


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