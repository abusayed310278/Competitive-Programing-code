#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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
int n = 3e5 + 5;
vi val(n + 5);
vi dp(n + 5);
vvi g(n + 5);


ll ans = 0;

void dfs(int u, int p) {

	dp[u] = val[u];
	for (auto &v : g[u]) {

		if (v == p)continue;

		dfs(v, u);
		dp[u] = __gcd(dp[v], dp[u]);
	}

}

void dp_dfs(int u, int p, ll above) {

	ll sum = 0;
	for (int v : g[u]) {
		if (v == p)continue;
		sum += dp[v];
	}

	ans = max(ans, sum + above);

	for (int v : g[u]) {

		if (v == p)continue;
		dp_dfs(v, u, sum + above - dp[v]);
	}

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		cin >> n;
		ans = 0;

		for (int i = 1; i <= n ; i++) {
			cin >> val[i]; g[i].clear();

		}

		for (int i = 1; i <= n - 1; i++) {

			int u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);

		}


		dfs(1, -1);
		dp_dfs(1, -1, 0);

		cout << ans << endl;

	}


	return 0;
}