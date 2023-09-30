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

		int m, n, k; cin >> m >> n >> k;

		vector<vector<int>>dp(1005, vector<int>(1005, 0));

		for (int i = 0; i <= 1000; i++) {
			for (int j = 0; j <= 1000; j++) {

				if (j == 0 or j == i) {
					dp[i][j] = 1;
				} else if (i != 0) {
					dp[i][j] = (dp[i - 1][j] % mod + dp[i - 1][j - 1] % mod) % mod;
				}
			}
		}

		cout << (dp[m][k] * dp[n][k]) % mod << endl;

	}

	return 0;
}