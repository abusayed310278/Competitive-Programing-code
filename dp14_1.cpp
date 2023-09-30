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


/*int f(int ind, int target, vector<int>&v, vector<vector<int>>&dp) {

	if (target == 0)return 1;
	if (ind == 0)return v[0] == target;
	if (dp[ind][target] != -1)dp[ind][target];


	bool nottake = f(ind - 1, target, v, dp);
	bool take = false;

	if (target >= v[ind])
		take = f(ind - 1, target - v[ind], v, dp);

	return dp[ind][target] = nottake | take;

}*/

//tabulation

int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;//k=target
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vector<vector<bool>>dp(n, vector<bool>(k + 1, 0));


		for (int i = 0; i < n; i++)dp[i][0] = 1;
		dp[0][v[0]] = 1;

		for (int ind = 1; ind < n; ind++) {
			for (int target = 1; target <= k; target++) {

				bool nottake = dp[ind - 1][target];
				bool take = false;

				if (target >= v[ind])
					take = dp[ind - 1][target - v[ind]];

				dp[ind][target] = nottake | take;

			}
		}

		cout << dp[n - 1][k] << endl;
	}

	return 0;
}