#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> val;

void dfs(int u, int par, int d) {

	if (d % 2) val[u] = 2; else val[u] = 1;

	for (auto i : g[u]) {
		if (i == par) continue;
		dfs(i, u, d + 1);
	}
}

void Solve() {
	int N;
	cin >> N;
	g.clear();
	g.resize(N + 1);
	val.assign(N + 1, 0);


	for (int i = 1; i < N; i ++) {
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}


	dfs(1, -1, 1);
	for (int i = 1; i <= N; i ++) {
		cout << val[i] << " ";
	}


	cout << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	int test_case = 1;
	cin >> test_case;
	for (int i = 1; i <= test_case; i ++) {
		Solve();
	}

	return 0;
}