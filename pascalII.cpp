#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

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

		int n, r; cin >> n >> r;
		vector<vector<int>>dp(n + 1, vector<int>(r + 1));

		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= r; j++) {
				if (j == 0 || j == i)
					dp[i][j] = 1;
				else if (i != 0) {
					dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
				}
			}
		}

		vector<int>ans;
		for (int i = 0; i <= n; i++) {
			ans.push_back(dp[n - 1][i]);

			// cout << dp[n][i] << " ";
		}

		return ans;

	}


	return 0;
}