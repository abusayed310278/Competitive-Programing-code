#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

const int LOG = 9;
vector<vector<int>> child, table;
vector<int >parent, depth;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


void dfs(int u, int level) {

	depth[u] = level;
	for (auto &c : child[u]) {
		parent[c] = u;
		dfs(c, level + 1);
	}
}

void build(int n) {

	table = vector<vector<int>>(LOG + 1, vector<int>(n + 1));

	for (int i = 0; i <= n; i++)table[0][i] = parent[i];

	for (int r = 1; r <= LOG; r++) {
		for (int j = 2; j <= n; j++) {
			table[r][j] = table[r - 1][table[r - 1][j]];
		}
	}

}

int lca(int u, int v) {

	if (depth[u] > depth[v])swap(u, v);

	//assume v >u
	int k = depth[v] - depth[u];

	for (int i = LOG; i >= 0; i--) {

		if ((k & (1 << i)) > 0)v = table[i][v];
	}

	if (u == v)return u;


	for (int i = LOG; i >= 0; i--) {

		if (table[i][u] != table[i][v]) {
			u = table[i][u];
			v = table[i][v];
		}
	}

	return parent[u];
}

void solve() {

	int n; cin >> n;
	child = vector<vector<int>>(n + 1, vector<int>(n + 1));
	for (int v = 1; v <= n; v++) {

		int cnt; cin >> cnt;
		for (int j = 0; j < cnt; j++) {

			int u; cin >> u;
			child[v].push_back(u);

		}
	}





	parent = vector<int>(n + 1);
	depth = vector<int>(n + 1);

	dfs(1, 1);
	build(n);


	int q; cin >> q;
	while (q--) {

		int u, v; cin >> u >> v;
		cout << lca(u, v) << endl;
	}


}


int main()
{

	cp();
	int t; cin >> t;
	// cout<<t;

	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ":";
		solve();


	}

	return 0;
}