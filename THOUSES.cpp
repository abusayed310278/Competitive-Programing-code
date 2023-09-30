#include <bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int mod = 1000000007;

vector<int> adj[500001];

int dfs(int node, int parent) {
	multiset<int> s;
	for (auto i : adj[node]) {
		if (i == parent) continue;
		int ans = dfs(i, node);
		s.insert(ans);
	}
	int res = 1, val = 1;
	for (auto i = s.rbegin(); i != s.rend(); i++) {
		res += (val++) * (*i);
	}
	return res;
}

void solve() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	int ans = dfs(1, -1); ans %= mod;
	cout << (ans * x) % mod << endl;
	for (int i = 1; i <= n; i++) adj[i].clear();
}

signed main() {
	fast
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}