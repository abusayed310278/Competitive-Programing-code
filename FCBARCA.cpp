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

		int n, k; cin >> n >> k;
		vvi dp(n + 1, vi(2, 0));
		dp[0][0] = 1;

		for (int i = 1; i <= n; i++) {

			dp[i][0] = (k * dp[i - 1][1]) % mod;
			dp[i][1] = ((k - 1) * dp[i - 1][1] + dp[i - 1][0]) % mod;
		}

		cout << (dp[n][0] % mod + mod) % mod << endl;
	}

	return 0;
}