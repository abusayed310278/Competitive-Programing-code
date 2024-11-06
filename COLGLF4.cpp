#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
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


void solve()
{

	int n, e, h, a, b, c; cin >> n >> e >> h >> a >> b >> c;

	int ans = 1e18;

	for (int cake = 0; cake <= n; cake++) {

		if (e < cake || h < cake)break;

		int o = (e - cake) / 2;
		int m = (h - cake) / 3;

		if (cake + o + m < n)continue;

		int oreq, mreq;
		if (a < b) {
			oreq = min(o, n - cake);
			mreq = n - cake - oreq;
		} else {
			mreq = min(m, n - cake);
			oreq = n - cake - mreq;
		}


		int price = cake * c + oreq * a + mreq * b;

		ans = min(ans, price);
	}

	if (ans == 1e18)cout << -1 << endl; else cout << ans << endl;

}




int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}