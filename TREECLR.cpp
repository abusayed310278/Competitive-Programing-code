#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second

const ll mod = 1e9 + 7;
const int N = 2e6 + 1;
int n, c;
vector<int>adj[N];
ll ans = 1;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}



void dfs(int id, int p, int val) {

	ans = (ans * val)  % mod;
	int cnt = 0;
	val = max(c - 2, val - 1);
	for (auto cur : adj[id]) {
		if (cur != p) {
			dfs(cur, id, val - cnt);
			cnt++;
		}
	}

}
void solve() {

	cin >> n >> c;
	for (int i = 1; i < n ; i++) {

		int u, v; cin >> u >> v;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	dfs(1, 0, c);
	cout << ans << '\n';
}


int main() {
	cp();
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}