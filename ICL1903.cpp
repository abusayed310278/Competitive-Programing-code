#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

void solve() {

	int n, m, k; cin >> n >> m >> k;

	int ans = -1;
	int times = n / m;
	while (times) {

		int rem = n - m * times;
		if (rem % k == 0) {
			ans = rem / k;
			break;
		}
		times--;
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


	// cout << log2(pow(10, 18));

	return 0;
}