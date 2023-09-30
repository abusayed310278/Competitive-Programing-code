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


//top down
int f(int ind, int buy, int cap, int n, vector<int>&v, vector<vector<vector<int>>>&dp) {

	if (ind == n || cap == 0)return 0;
	if (dp[ind][buy][cap] != -1)return dp[ind][buy][cap];

	int profit = 0;
	if (buy) {
		profit = max(-v[ind] + f(ind + 1, 0, cap, n, v, dp), 0 + f(ind + 1, 1, cap, n, v, dp));
	} else {
		profit = max(v[ind] + f(ind + 1, 1, cap - 1, n, v, dp) , 0 + f(ind + 1, 0, cap, n, v, dp));

	}
	return dp[ind][buy][cap] = profit;

}

//bottom up
int f(int n, vector<int>&v) {


	vector<vector<vector<int>>>dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int buy = 0; buy <= 1; buy++) {
			for (int cap = 1; cap <= 2; cap++) {

				int profit = 0;
				if (buy) {
					profit = max(-v[ind] + dp[ind + 1] [0][cap], 0 + dp[ind + 1] [1] [cap]);
				} else {
					profit = max(v[ind] + dp[ind + 1] [1] [cap - 1] , 0 + dp[ind + 1][0][ cap]);

				}
				dp[ind][buy][cap] = profit;

			}
		}
	}

	/*	for (int ind = n - 1; ind >= 0; ind--) {
			for (int buy = 0; buy <= 1; buy++) {
				for (int cap = 1; cap <= 2; cap++) {

					cout << dp[ind][buy][cap] << " ";

				}
				cout << endl;
			}
			cout << endl;
		}*/

	return dp[0][1][2];

}


//space optimization
int f(vector<int>&v) {

	int n = v.size();
	vector<vector<int>>next(2, vector<int>(3, 0)), cur(2, vector<int>(3, 0));

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int buy = 0; buy <= 1; buy++) {
			for (int cap = 1; cap <= 2; cap++) {

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

	/*	for (int ind = n - 1; ind >= 0; ind--) {
			for (int buy = 0; buy <= 1; buy++) {
				for (int cap = 1; cap <= 2; cap++) {

					cout << dp[ind][buy][cap] << " ";

				}
				cout << endl;
			}
			cout << endl;
		}*/

	return next[1][2];

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<vector<int>>>dp(n, vector<vector<int>>(2, vector<int>(3, -1)));

		// cout << f(0, 1, 2, n, v,dp) << endl;

		cout << f(n, v) << endl;

	}


	return 0;
}