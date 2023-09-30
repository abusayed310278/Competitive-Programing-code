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
	int n, m; cin >> m >> n;
	vector<vector<int>>dp(n + 1, vector<int>(m + 1, 0));
	vector<int> x(n + 1), y(n + 1);
	for (int i = 1; i <= n; i++)cin >> x[i] >> y[i];
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			for (int k = x[i]; k <= y[i]; k++)
				if (j >= k)
					dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % mod
				;
		}
	}

	cout << dp[n][m] << endl;

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}