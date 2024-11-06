#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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

int _ceil(int a, int b) {
	return (a % b == 0 ? a / b : a / b + 1);
}


void solve() {

	int n, x, y; cin >> n >> x >> y;
	vi a(n);

	int mx = INT_MIN;
	for (auto &x : a) {
		cin >> x;
		mx = max(mx, x);
	}

	int ans = 0;
	if (x >= y) {

		for (int i = n - 1; i >= 0; i--) {
			a[i] -= y * ans;
			if (a[i] > 0) {

				ans += _ceil(a[i], x);
			}
		}
		cout << ans << endl;


	} else {
		cout << _ceil(mx, y) << endl;
	}




}

int32_t main()
{
	// pre();
	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}