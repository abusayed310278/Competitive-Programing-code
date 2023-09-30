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
int f(int ind, int k, vector<int>&v, vector<vector<int>>&dp) {

	if (k == 0)return true;

	if (ind == 0)return v[0] == k;
	if (dp[ind][k] != -1)return dp[ind][k];

	int nottaken = 0 + f(ind - 1, k, v, dp);

	int taken = false;
	if (v[ind] <= k)
		taken = f(ind - 1, k - v[ind], v, dp);

	return dp[ind][k] = taken || nottaken;
}

//bottom up
int f(int k, vector<int>&v) {

	int n = v.size();
	vector<vector<int>>dp(n + 1, vector<int>(k + 1, 0));

	for (int ind = 0; ind < n; ind++)dp[ind][0] = true;

	if (v[0] <= k)dp[0][v[0]] = true;

	for (int ind = 1; ind < n; ind++) {
		for (int K = 1; K <= k; K++) {

			int nottaken = 0 + dp[ind - 1][ K];

			int taken = false;
			if (v[ind] <= K)
				taken = dp[ind - 1][ K - v[ind]];

			dp[ind][K] = taken || nottaken;


		}
	}

	return dp[n - 1][k];
}

//space optimization
int ff(int k, vector<int>&v) {

	int n = v.size();
	vector<int>prev(k + 1, 0), cur(k + 1, 0);

	prev[0] = true;

	if (v[0] <= k)prev[v[0]] = true;

	for (int ind = 1; ind < n; ind++) {
		for (int K = 1; K <= k; K++) {

			int nottaken = 0 + prev[ K];

			int taken = false;
			if (v[ind] <= K)
				taken = prev[ K - v[ind]];

			cur[K] = taken || nottaken;


		}

		prev = cur;
	}

	return prev[k];
}

int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		/*		vector<vector<int>>dp(n, vector<int>(k + 1, -1));
				cout << f(n - 1, k, v, dp) << endl;*/

		// cout << f(k, v) << endl;
		cout << ff(k, v) << endl;
	}

	return 0;
}