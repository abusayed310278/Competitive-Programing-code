#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
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
vector <vector< pair<int, int>>>g;
vector<int>pre;

void dfs(int u, int par) {


	for (auto &it : g[u]) {

		int v = it.first;
		int  w = it.second;
		if (v == par)continue;

		pre[v] = w ^ pre[u];
		dfs(v, u);
	}
}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		// vector<pair<int, int>>g[n + 1];
		// g.resize(n + 1);
		pre.assign(n + 1, 0);

		for (int i = 1; i <= n - 1; i++) {
			int u, v, w; cin >> u >> v >> w;
			g[u].pb({v, w});
			g[v].pb({u, w});
		}

		dfs(1, 0);


		unordered_map<int, pair<int, int>>m;
		bool flag = 0;

		for (int i = 1; i <= n; i++) {

			for (int j = i + 1; j <= n; j++) {

				int x = pre[i] ^ pre[j];

				if (m.find(x) != m.end()) {

					if (i == m[x].first and j == m[x].second)break;

					cout << m[x].first << ' ' << m[x].second << ' ';
					cout << i << " " << j << '\n';

					flag = 1;
					break;
				} else {
					m[x] = {i, j};
				}
			}
			if (flag)break;
		}

		if (!flag)cout << -1 << '\n';


	}

	return 0;
}