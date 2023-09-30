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


int f(int n, int k, vector<int>&v) {

	vector<int>dp(n + 1, 0);

	dp[1] = dp[0] + abs(v[1] - v[0]);

	for (int i = 2; i < n; i++) {

		dp[i] = INT_MAX;
		for (int kk = 1; kk <= k; kk++) {

			dp[i] = min( dp[i], dp[i - kk] + abs(v[i] - v[i - kk]) );
		}
	}

	for (int i = 0; i < n; i++){
		cout << dp[i] << " ";
	}	
	// return dp[n - 1];
}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		cout << f(n, k, v) << endl;
	}


	return 0;
}