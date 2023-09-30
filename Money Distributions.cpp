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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;

		long size = max(n, k);
		long long dp[size + 1][size + 1];

		for (int i = 0; i <= size; i++) {

			dp[i][0] = dp[i][i] = 1;
			for (int j = 1; j < i; j++) {

				dp[i][j] = (dp[i - 1][j] % mod + dp[i - 1][j - 1] % mod) % mod;

			}
		}

		cout << dp[n - 1][k - 1] << endl;

	}

	return 0;
}