#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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
const int N = 1e5 + 5;

vvi g;
vi dp, val, pre, suf, children;

int ans;

int dfs(int u, int par) {

	int gcd = val[u];
	for (auto v : g[u]) {

		if (v == par)continue;
		int childgcd = dfs(v, u);

		gcd = __gcd(gcd, childgcd);

	}

	dp[u] = gcd;
	return gcd;
}

void maximalDamage(int node, int par, int pargcd) {

	int cur = pargcd;

	for (auto child : g[node]) {

		if (child == par)continue;

		cur += dp[child];
		children.pb(child);
		pre.pb(dp[child]);
		suf.pb(dp[child]);
	}


	ans = max(ans, cur);

	int len = pre.size();
	for (int i = 1; i < len; i++) {
		pre[i] = __gcd(pre[i], pre[i - 1]);
	}

	for (int i = len - 2; i >= 0; i--) {
		suf[i] = __gcd(suf[i], suf[i + 1]);
	}

	for (int i = 0; i < len; i++) {

		int newpar = val[node];
		if (i > 0) {
			newpar = __gcd(newpar, pre[i - 1]);
		}
		if (i < (len - 1)) {
			newpar = __gcd(newpar, suf[i + 1]);
		}

		if (par != 1) {
			newpar = __gcd(newpar, par);
		}

		maximalDamage(children[i], node, newpar);
	}

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ans = 0;
		int n; cin >> n;
		g.resize(n + 1);

		for (int i = 1; i <= n - 1; i++) {

			int u, v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);

		}

		val.assign(n + 1, 0);
		dp.assign(n + 1, 0);
		for (int i = 1; i <= n; i++)cin >> val[i];

		dfs(1, 1);

		maximalDamage(1, 1, 0);

		cout << ans << endl;
	}

	return 0;
}