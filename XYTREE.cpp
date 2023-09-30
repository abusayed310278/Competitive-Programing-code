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


int main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		int n; cin >> n;
		vvi g(n);
		for (int i = 0; i < n - 1; i++) {
			int u, v; cin >> u >> v;
			g[--u].push_back(--v);
			g[v].push_back(u);
		}

		vi a(n, 0), par(n, 0), unchanged(n, 0);

		auto dfs = [&](const auto & self, int u, int p)->void{

			par[u] = p;
			for (auto v : g[u]) {
				if (v == p)continue;
				self(self, v, u);
				++unchanged[u];
			}
		};

		dfs(dfs, 0, 0);

		int q; cin >> q;
		int ans = n - 1;
		while (q--) {

			int type; cin >> type;
			if (type == 1) {

				int u; cin >> u; --u;
				if (a[u] == 0 and unchanged[u] == 0) {
					a[u] = 1;
					--ans;
					if (u == 0)ans = n - 1; else --unchanged[par[u]];
				}


			} else {

				cout << ans << endl;

			}

		}

	}

	return 0;
}