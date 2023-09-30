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
int f(int m, vector<int>&v, vector<int>&dp) {

	if (m == 0)return 0;
	if (dp[m] != 0)return dp[m];


	for (auto c : v) {
		if (m - c >= 0 and dp[m - c] != INT_MAX)
			dp[m] = min( dp[m], f(m - c, v, dp) ) + 1;
	}

	return dp[m] == INT_MAX ? -1 : dp[m];

}


//bottom up
int countf(int m, vector<int>&v) {


	vector<int>dp(m + 1, 0);
	dp[0] = 0;

	for (int i = 1; i <= m; i++) {

		dp[i] = INT_MAX;

		for (auto c : v ) {
			if (i - c >= 0 and dp[i - c] != INT_MAX) {
				dp[i] = min( dp[i], dp[i - c] + 1);
			}
		}

	}

	return dp[m] == INT_MAX ? -1 : dp[m];


}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, m; cin >> n >> m;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];
		vector<int>dp(m + 1, 0);

		// cout << f(m, v, dp) << endl;
		cout << countf(m, v) << endl;

	}


	return 0;
}


/*


2
4 8
1 5 7 10
4 16
1 5 7 10


*/