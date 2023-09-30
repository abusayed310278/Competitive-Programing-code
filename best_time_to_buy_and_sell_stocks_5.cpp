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

int f(int ind, int buy, int n, vector<int>&v, vector<vector<int>>&dp) {

	if (ind >= n)return 0;
	if (dp[ind][buy] != -1)return dp[ind][buy];

	int profit = 0;
	if (buy) {
		profit = max(-v[ind] + f(ind + 1, 0, n, v, dp), 0 + f(ind + 1, 1, n, v, dp));
	} else {
		profit = max(v[ind] + f(ind + 2, 1, n, v, dp) , 0 + f(ind + 1, 0, n, v, dp));

	}
	return dp[ind][buy] = profit;
}

//bottom up
int f(int n, vector<int>&v) {

	vector<vector<int>>dp(n + 2, vector<int>(3, 0));

	for (int ind = n - 1; ind >= 0; ind--) {
		for (int buy = 0; buy <= 1; buy++) {

			int profit = 0;
			if (buy) {
				profit = max(-v[ind] + dp[ind + 1][ 0], 0 + dp[ind + 1][ 1]);
			} else {
				profit = max(v[ind] + dp[ind + 2] [1] , 0 + dp[ind + 1][0]);

			}
			dp[ind][buy] = profit;
		}
	}


	return dp[0][1];
}




int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<int>>dp(n + 1, vector<int>(2, -1));

		// cout << f(0, 1, n, v,dp) << endl;
		cout << f(n, v) << endl;

	}


	return 0;
}