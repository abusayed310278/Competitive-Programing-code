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

const int N = 1e5 + 5;
vi g[N];

pair<ll, int>dfs(int u) {

	ll mex = 0;
	int size = 1;
	for (auto x : g[u]) {

		auto temp = dfs(x);
		mex = max(mex, temp.first);
		size += temp.second;
	}

	return {mex + size, size};

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		for (int i = 1; i <= n; i++)g[i].clear();

		for (int i = 2; i <= n; i++) {
			int u; cin >> u;
			g[u].pb(i);
		}

		cout << dfs(1).first << endl;

	}

	return 0;
}