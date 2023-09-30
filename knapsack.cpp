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

int f(int n, int w, vector<int>&wts, vector<int>&pts, vector<vector<int>>&dp) {

	if (n == 0 || w == 0)return 0;
	if (dp[n][w] != -1)return dp[n][w];

	int inc = 0, exc = 0;

	if (wts[n - 1] <= w) {
		inc = pts[n - 1] + f(n - 1, w - wts[n - 1], wts, pts, dp);
	}
	exc = f(n - 1, w, wts, pts, dp);

	return dp[n][w] = max(inc, exc);

}

//bottom up

int f(int n, int w, vector<int>&wts, vector<int>&pts) {

	vector<vector<int>>dp(n + 1, vector<int>(w + 1, 0));


	int inc = 0, exc = 0;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= w; j++) {


			if (wts[i - 1] <= w) {
				inc = pts[i - 1] + dp[n - 1][ w - wts[n - 1]];
			}
			exc = dp[n - 1][w];

			dp[i][j] = max(inc, exc);
		}
	}

	return dp[n][w];

}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, w; cin >> n >> w;
		vector<int>wts(n), pts(n);
		for (int i = 0; i < n; i++) {
			cin >> wts[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> pts[i];
		}

		vector<vector<int>>dp(n + 1, vector<int>(w + 1, -1));
		// cout << f(n - 1, w, wts, pts, dp) << endl;
		cout << f(n, w, wts, pts) << endl;
	}


	return 0;
}