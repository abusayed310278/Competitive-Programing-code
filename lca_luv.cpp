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
const int N = 1e5 + 10;
int par[N];
vector<int>g[N];

void dfs(int u, int p = -1) {

	par[u] = p;
	for (int child : g[u]) {
		if (child == p)continue;
		dfs(child, u);
	}
}

vector<int>path(int v) {

	vector<int>ans;
	while (v != -1) {
		ans.push_back(v);
		v = par[v];
	}

	reverse(ans.begin(), ans.end());
	return ans;

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		// vector<int>g[n]; 
		for (int i = 0; i < n - 1; i++) {

			int u, v; cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}

		dfs(1);

		//query
		int q; cin >> q;
		while (q--) {

			int u, v; cin >> u >> v;

			auto path_u = path(u);
			auto path_v = path(v);

			int mini = min(path_u.size(), path_v.size());
			int lca = -1;
			for (int i = 0; i < mini; i++) {
				if (path_u[i] == path_v[i]) {
					lca = path_u[i];
				} else {
					break;
				}
			}

			cout << lca << endl;
		}


	}

	return 0;
}