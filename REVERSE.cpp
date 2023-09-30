#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;

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
	int t = 1;
	while (t--) {

		int n, m; cin >> n >> m;
		vvvi g(n + 1);
		while (m--) {

			int u, v; cin >> u >> v;
			g[u].pb({v, 0});
			g[v].pb({u, 1});
		}

		priority_queue<pair<int, int>>q;
		vi dist(n + 1, 1e9 + 7);

		q.push({0, 1});
		dist[1] = 0;

		while (!q.empty()) {

			int u = q.top().second;
			q.pop();

			for (auto val : g[u]) {
				int v = val[0];
				int w = val[1];

				if (dist[v] > dist[u] + w) {
					dist[v] = dist[u] + w;
					q.push({ -w, v});
				}
			}

		}

		if (dist[n] >= 1e9)cout << -1;
		else cout << dist[n];

	}

	return 0;
}