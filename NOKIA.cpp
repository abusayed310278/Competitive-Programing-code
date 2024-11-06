#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
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
// const double error = (double)1 / (double)120;
#define mx  31
#define mxv  1010

vector<int>pos[mx];
vector<bool>vis(mxv, false);

void pre() {

	pos[0].pb(0);
	pos[1].pb(2);

	for (int n = 2; n < mx; n++) {

		for (int i = 0, j = n - 1 - i; i <= j; i++, j--) {

			for (auto x : pos[i])
				for (auto y : pos[j])
					vis[x + y + n + 1] = true;

		}

		for (int i = 1 ; i < mxv; i++)if (vis[i])pos[n].pb(i);

	}

}

int32_t main()
{
	pre();
	cp();
	int t = 1; cin >> t;
	while (t--) {

		int n, m; cin >> n >> m;
		int ans = -1;
		for (vector<int>::iterator it = pos[n].begin(); it != pos[n].end(); it++)
			if (*it <= m)ans = m - *it;

		cout << ans << endl;
	}

	return 0;
}