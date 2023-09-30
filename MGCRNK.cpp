#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}



int main()
{

	cp();
	int t; cin >> t;

	cout << fixed << setprecision(8);
	while (t--) {

		int n; cin >> n;
		int v[n][n], dp[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> v[i][j];
				dp[i][j] = 0;

				if (i and j)dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
				else if (i)dp[i][j] = dp[i - 1][j];
				else if (j)dp[i][j] = dp[i][j - 1];
				dp[i][j] = dp[i][j] + v[i][j];
			}
		}

		if (dp[n - 1][n - 1] < 0)cout << "Bad Judges" << endl;
		else cout << 1.0 * (dp[n - 1][n - 1] / (2 * n - 3)) << endl;

	}


	return 0;
}