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
int dp[1005];

int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		int n; cin >> n;
		int h[n], k[n];

		for (int i = 0; i < n; i++)cin >> h[i];
		for (int i = 0; i < n; i++)cin >> k[i];

		memset(dp, INT_MAX, sizeof (dp));
		dp[0] = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 1000; j++) {

				if (k[i] + j <= 1000) {
					dp[k[i] + j] = min(dp[k[i] + j] , dp[j] + 1 );
				}
			}
		}

		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans += dp[h[i] * 2];

		}

		cout << ans << endl;
	}

	return 0;
}