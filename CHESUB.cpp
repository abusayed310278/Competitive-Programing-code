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
int inf = 1e9;

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vi a(n + 1);
		for (int i = 1; i <= n; i++)cin >> a[i];

		vvi dp(n + 1, vi (k + 1, -inf));
		vvi stmax(n + 1, vi (k + 1, -inf));

		for (int i = 0; i <= n; i++) {
			dp[i][0] = 0;
			stmax[i][0] = 0;
		}

		dp[1][1] = a[1];
		stmax[1][1] = a[1];

		int i, j;
		for (i = 2; i <= n; i++) {

			for (j = 1; j <= k; j++) {


				if (j > i) {
					dp[i][j] = -inf;
				} else {

					dp[i][j] = dp[i - 1][j] + j * a[i];
					dp[i][j] = max(dp[i][j], stmax[i - 1][j - 1] + (j * a[i]));
				}


				stmax[i][j] = max(stmax[i - 1][j], dp[i][j]);
			}

		}

		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= k; j++) {
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}

		int maxi = dp[1][k];
		for (i = 1; i <= n; i++)maxi = max(maxi, dp[i][k]);

		// cout << maxi << endl;


	}

	return 0;
}