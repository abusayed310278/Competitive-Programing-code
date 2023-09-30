#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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

const int mod = 1e9 + 7;

int nc2(int n) {

	return (n * (n - 1)) / 2;
}

void solve() {

	int n; cin >> n;
	int sum = n * (n + 1) / 2;

	if (sum & 1) {
		cout << 0 << endl;
		return;
	}
	int x = work(n);
	ans += n - x;

	if (2 * x * (x + 1) == sum) {
		ans += nc2(x, 2) + nc2(n - x, 2);
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