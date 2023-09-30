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
	while (t--) {

		int n; cin >> n;
		string s; cin >> s;
		string r = s;

		reverse(r.begin(), r.end());
		vector<vector<int>>dp(n + 1, vector<int>(n + 1, 0));


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {


				int mx = 0, nc = 0;
				if (i > 0)mx = max(mx, dp[i - 1][j]);
				if (j > 0)mx = max(mx, dp[i][j - 1]);
				if (i > 0 and j > 0)nc = dp[i - 1][j - 1];
				mx = max(mx, nc);

				if (s[i] == r[j])mx = max(nc + 1, mx);

				dp[i][j] = mx;


			}
		}

		cout << dp[n - 1][n - 1] / 2 << endl;

	}


	return 0;
}