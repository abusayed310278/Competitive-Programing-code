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

int f(int n, vector<int>&dp) {

	if (n == 0 || n == 1)return 1;
	if (dp[n] != 0)return dp[n];

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int x = f(i - 1, dp) ;
		int y = f(n - i, dp);

		ans += x * y;
	}
	return dp[n] = ans;
}


int bottomUp(int n) {


	vector<int>dp(n + 1, 0);
	dp[0] = dp[1] = 1;

	int ans = 0;
	for (int i = 2; i <= n; i++) {

		for (int j = 1; j <= i; j++) {

			int x = dp[j - 1] ;
			int y = dp[i - j];

			dp[i] += x * y;
		}

	}
	return dp[n];

}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>dp(n + 1, 0);

		// cout << f(n, dp) << endl;

		cout << bottomUp(n) << endl;
	}


	return 0;
}