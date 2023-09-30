#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


void solve() {


	int a, b; cin >> a >> b;

	if (a == b) {
		cout << -1 << endl; return;
	}

	int n = abs(a - b);

	int ans = 0;

	for (int i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			ans++;

			if (i * i != n)ans++;
		}

	}

	cout << ans << endl;

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