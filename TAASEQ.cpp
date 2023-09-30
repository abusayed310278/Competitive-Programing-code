#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		if (n < 2)continue;

		vector<int>v(n + 5);
		for (int i = 1; i <= n; i++)cin >> v[i];

		int ans = INT_MAX;
		int d = v[2] - v[1];
		for (int i = 1; i <= n; i++) {

			int nth = v[1] + (i - 1) * d;

			if (v[i] != nth) {
				ans = min(ans, v[i]);
			}

		}
		if (ans == INT_MAX)cout << -1 << endl; else
			cout << ans << endl;

	}

	return 0;
}