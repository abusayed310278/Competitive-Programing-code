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

	int x, k; cin >> x >> k;

	int a = log2(k);
	int b = k - pow(2, a);

	double ans = (2 * b + 1) * (x / pow(2, a + 1));

	cout << fixed << setprecision(10) << ans << endl;


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