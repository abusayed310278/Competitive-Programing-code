#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

const int LOG = 10;

vector<int >par, d, h;
vector<vector<int>>table;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);-
#endif

}


void dfs(int u, int l, vector<int>g[]) {

	d[u] = l;
	for (auto &c : g[u]) {
		par[c] = u;
		dfs(c, l + 1, g);
		h[u] = max(h[u], h[c] + 1);
	}
}

void build(int n) {

	for (int i = 0; i < LOG; i++)table[0][i] = par[i];

	for (int p = 1; p <= LOG; p++) {
		for (int i = 2; i <= n; i++) {

			int parent = table[p - 1][i];
			table[p][i] = table[p - 1][parent];
		}
	}

}

int lca(int u, int v) {

	if (d[u] > d[v])swap(u, v);

	int k = d[v] - d[u];
	for (int i = LOG; i >= 0; i--) {

		int mask = 1 << i;
		if ((k & mask) > 0) {
			v = table[i][v];
		}
	}

	if (u == v)return u;

	for (int i = LOG; i >= 0; i--) {
		int up = table[i][u];
		int vp = table[i][v];

		if (up != vp) {
			u = up;
			v = vp;
		}
	}

	u = par[u];

	return u;

}


void solve() {

	int n; cin >> n;
	vector<int>g[n + 1];
	for (int u = 1; u <= n; u++) {

		int m; cin >> m;
		for (int j = 0; j < m; j++) {

			int v; cin >> v;
			g[u].push_back(v);

		}
	}


	/*	for (int i = 1; i <= n; i++) {

			for (int j = 0; j < g[i].size(); j++) {
				cout << g[i][j] << " ";
			}
			cout << endl;
		}*/




	par = vector<int>(n + 1);
	d = vector<int>(n + 1);
	h = vector<int>(n + 1);

	dfs(1, 1, g);
	table = vector <vector<int>>(LOG + 1, vector<int>(n + 1));

	build(n);

	/*	for (int i = 0; i <= LOG; i++) {
			for (int j = 0; j <= n; j++) {
				cout << table[i][j] << " ";
			}
			cout << endl;
		}*/


	/*	for (int i = 1; i <= n; i++) {
			cout << par[i] << endl;
		}

		for (int i = 1; i <= n; i++) {
			cout << d[i] << endl;
		}*/

	/*	for (int i = 1; i <= n; i++) {
			cout << h[i] << endl;
		}*/


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


	for (int i = 1; i <= t; i++) {
		cout << "Case " << i << ":" << endl;
		solve();
	}

	return 0;
}