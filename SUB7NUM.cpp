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

int digits(int n) {

	int cnt = 0;

	while (n > 0) {
		cnt++;
		n /= 10;
	}

	return cnt;
}


int32_t main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vvi dp(n + 1, vi(7, 0));
		dp[0][0] = 1;

		int ans = 0;

		for (int i = 0; i < n; i++) {

			int d = digits(v[i]);
			int power = pow(10, d);

			for (int j = 0; j < 7; j++) {

				dp[i + 1][(j * power + v[i]) % 7] = dp[i][j] + dp[i][(j * power + v[i]) % 7];
				dp[i + 1][j] %= mod;

			}
		}

		cout << (dp[n][0] - 1 + 2 * mod) % mod << endl;

	}



	return 0;
}