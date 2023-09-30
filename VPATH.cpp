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
const int N = 1e5 + 5;

vi g[N];
vi vis(N);

ll ans = 0;

void dfs(int u, int p) {

	vis[u] = 1;
	ans++;

	for (auto &v : g[u]) {

		if (v == u)continue;
		dfs(v, u);

		ans += (vis[u] * vis[v]);
		vis[u] += (2 * vis[v]) ;

		vis[u] %= mod;
		ans %= mod;

	}
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		

		for (int i = 1; i <= n; i++) {
			vis[i] = 0;
			g[i].clear();
		}

		for (int i = 1; i <= n - 1; i++) {
			int u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}


		dfs(1, -1);
		cout << ans << endl;
	}

	return 0;
}