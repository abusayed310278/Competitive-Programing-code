#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
#define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

vector<int> binayRep(int x) {

	vector<int>lis;
	while (x ) {

		lis.push_back(x & 1);
		x >>= 1;
	}

	reverse(lis.begin(), lis.end());
	return lis;
}


void solve() {


	int u, v; cin >> u >> v;

	vector<int>listu = binayRep(u);
	vector<int>listv = binayRep(v);
	int sz = min(listu.size(), listv.size());

	int dept = 0;
	for (int i = 0; i < sz; i++) {

		if (listu[i] == listv[i]) {
			dept += 1;
		} else {
			break;
		}

	}

	int ans = listu.size() + listv.size() - 2 * dept;

	cout << ans << endl;
}

int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}