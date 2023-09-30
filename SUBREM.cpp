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

const int N = 1e5 + 1;
vector<int>g[N];
vector<int>val(N);
int n, x;

int dfs(int u, int p = 1) {

	int res = 0;
	for (auto child : g[u]) {
		if (child != p) {
			res += dfs(child, u);
		}
	}
	return max(val[u] + res, -x);
}

void init() {

	for (int i = 0; i < N; i++)g[i].clear();
}

int32_t main()
{

	cp();
	init();
	int t; cin >> t;
	while (t--) {

		cin >> n >> x;

		val.clear();

		// vector<int>v(n + 1);
		for (int i = 1; i <= n; i++)cin >> val[i];

		for (int i = 1; i <= n - 1; i++) {
			int u, v; cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		cout << dfs(1) << endl;

	}

	return 0;
}