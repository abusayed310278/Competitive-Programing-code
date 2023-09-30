#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int m, n; cin >> m >> n;

		vi x(n + 1), y(n + 1);
		for (int i = 1; i <= n; i++) {
			cin >> x[i] >> y[i];
		}

		vvi dp(n + 1, vi(m + 1));

		dp[0][0] = 1;


		for (int i= 1; i <= n; i++) {
			for (int j = 0; j <= m; j++) {
				for (int k = x[i]; k <= y[i]; k++) {

					if (j >= k)
						dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % mod;
				}
			}
		}

		cout << (dp[n][m] % mod + mod) % mod << endl;

	}


	return 0;
}