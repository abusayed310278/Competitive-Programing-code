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

int minCost(vector<vector<int>> &costs) {

	int n = costs.size();
	vector<vector<int>>dp(n + 1, vector<int>(4, 0));

	for (int i = 0; i < n; i++)dp[0][i] = costs[0][i];

	for (int i = 1; i < n; i++) {

		dp[i][0] = min(dp[i - 1][1] , dp[i - 1][2]) + costs[i][0];
		dp[i][1] = min(dp[i - 1][0] , dp[i - 1][2]) + costs[i][1];
		dp[i][2] = min(dp[i - 1][0] , dp[i - 1][1]) + costs[i][2];
	}

	return min(dp[n - 1][0] , min(dp[n - 1][1] , dp[n - 1][2]));
}

int main()
{

	cp();
	int t;cin>>t;
	while(t--){


		int n; cin >> n;
		vector<vector<int>>v(n + 1, vector<int>(4));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 3; j++) {

				cin >> v[i][j];
			}
		}

		cout << minCost(v) << endl;
	
	}


	return 0;
}

