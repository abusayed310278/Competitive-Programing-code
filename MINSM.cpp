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

void solve() {

	int n; cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++)cin >> v[i];

	int ans = v[0];
	for (int i = 1; i < n; i++) {

		ans = __gcd(ans, v[i]);

	}

	cout << ans * 1LL * n << endl;

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