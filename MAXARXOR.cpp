#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
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
const double error = (double)1 / (double)120;


void solve() {

	int n, k; cin >> n >> k;

	int t = pow(2, n);
	int ans = min(2 * k, t) * (t-1);

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