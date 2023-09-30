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


void dfs(int u, int &size, vvi &g, vi &vis) {

	size++;
	vis[u] = 1;
	for (auto &i : g[u]) {
		if (!vis[i])dfs(i, size, g, vis);
	}

}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, m; cin >> n >> m;
		vi vis(n + 1, 0);
		vvi g(n + 1, vi({}));

		for (int i = 0; i < m; i++) {
			int a, b; cin >> a >> b;
			a--; b--;
			g[a].push_back(b);
			g[b].push_back(a);
		}

		int groups = 0;
		long long ways = 1;
		for (int i = 0; i < n; i++) {

			if (vis[i])continue;
			int size = 0;
			dfs(i, size, g, vis);
			groups++;
			ways = ways * size;
			ways %= mod;
		}

		cout << groups << " " << ways << endl;

	}

	return 0;
}