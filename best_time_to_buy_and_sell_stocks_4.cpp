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



int f(int k, vector<int>&v) {

	int n = v.size();
	vector<vector<int>>next(2, vector<int>(k + 1, 0)), cur(2, vector<int>(k + 1, 0));

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int buy = 0; buy <= 1; buy++) {
			for (int cap = 1; cap <= k; cap++) {

				int profit = 0;
				if (buy) {
					profit = max(-v[ind] + next [0][cap], 0 + next [1] [cap]);
				} else {
					profit = max(v[ind] + next [1] [cap - 1] , 0 + next[0][ cap]);

				}
				cur[buy][cap] = profit;

			}
		}
		next = cur;
	}


	return next[1][k];

}

//more optimized
int f(int ind, int transno, int n, int k, vector<int>&v, vector<vector<int>>&dp) {


	if (ind == n || transno == 2 * k) {
		return 0;
	}

	if (dp[ind][transno] != -1)return dp[ind][transno];

	if (transno % 2 == 0) {
		return dp[ind][transno] = max(-v[ind] + f(ind + 1, transno + 1, n, k, v, dp) , 0 + f(ind + 1, transno, n, k, v, dp));
	}
	return dp[ind][transno] = max(v[ind] + f(ind + 1, transno + 1, n, k, v, dp) , 0 + f(ind + 1, transno, n, k, v, dp));
}

//bottom up

int f(int n, int k, vector<int>&v) {

	vector<vector<int>>dp(n + 1, vector<int>(2 * k + 1, 0));

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int transno = 2 * k - 1; transno >= 0; transno--) {

			if (transno % 2 == 0) {
				dp[ind][transno] = max(-v[ind] + dp[ind + 1] [transno + 1] , 0 + dp[ind + 1] [transno] );
			}
			else dp[ind][transno] = max(v[ind] + dp[ind + 1] [transno + 1]  , 0 + dp[ind + 1] [transno] );

		}
	}

	return dp[0][0];
}

//space optimization
int ff(int n, int k, vector<int>&v) {

	vector<int>next(2 * k + 1, 0), cur(2 * k + 1, 0);

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int transno = 2 * k - 1; transno >= 0; transno--) {

			if (transno % 2 == 0) {
				cur[transno] = max(-v[ind] + next [transno + 1] , 0 + next [transno] );
			}
			else cur[transno] = max(v[ind] + next [transno + 1]  , 0 + next [transno] );

		}
		next=cur;
	}

	return cur[0];
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		// cout << f(k, v) << endl;
		vector<vector<int>>dp(n, vector<int>(2 * k, -1));
		// cout << f(0, 0, n, k, v, dp) << endl;

		// cout << f(n, k, v) << endl;
		cout << ff(n, k, v) << endl;

	}


	return 0;
}