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


/*void f(int n, vector<vector<int>>&v) {

	vector<vector<int>>dp(n, vector<int>(3, 0));

	for (int j = 0; j < n; j++) {
		dp[0][j] = v[0][j];
	}

	for (int i = 1; i < n; i++) {

		for (int j = 0; j < 3; j++) {

			for (int jj = 0; jj < 3; jj++) {
				if (j != jj)
					dp[i][j] = max( dp[i][j] , dp[i - 1][jj] + v[i][j] );
			}
		}
	}

	cout << *max_element(dp[n - 1], dp[n - 1] + 4);
}*/

int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<vector<int>>v(n, vector<int>(3, 0));

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {

				cin >> v[i][j];
			}
		}


		// f(n, v);

		vector<vector<int>>dp(n + 1, vector<int>(4, 0));

		dp[0][0] = v[0][0];
		dp[0][1] = v[0][1];
		dp[0][2] = v[0][2];

		for (int i = 1; i < n; i++) {

			for (int j = 0; j < 3; j++) {

				for (int jj = 0; jj < 3; jj++) {
					if (j != jj) {
						dp[i][j] = max( dp[i][j] , dp[i - 1][jj] + v[i][j] );
					}
				}
			}
		}

		// cout << *max_element(dp[n - 1], dp[n - 1] + 3) << endl;
		cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});

	}

	return 0;
}