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
int f(int ind, int w, vector<int>&p, vector<int>&wt, vector<vector<int>>&dp) {

	if (ind == 0) {
		return (int)(w / wt[0]) * p[0];
	}

	if (dp[ind][w] != -1)return dp[ind][w];

	int take = INT_MIN;
	if (wt[ind] <= w) {
		take = p[ind] + f(ind, w - wt[ind], p, wt, dp);
	}
	int nottake = 0 + f(ind - 1, w, p, wt, dp);

	return dp[ind][w] = max(take, nottake);

}

//bottom up

int f(int w, vector<int>&p, vector<int>&wt) {

	int n = p.size();
	vector<vector<int>>dp(n, vector<int>(w + 1, 0));

	for (int W = 0; W <= w; W++) {
		dp[0][W] = (int)((W / wt[0]) * p[0]);
	}

	for (int ind = 1; ind < n; ind++) {
		for (int W = 0; W <= w; W++) {

			int nottake = 0 + dp[ind - 1] [W];
			int take = INT_MIN;
			if (wt[ind] <= W) {
				take = p[ind] + dp[ind][ W - wt[ind]];
			}

			dp[ind][W] = max(take, nottake);
		}
	}

	return dp[n - 1][w];
}

//space optimization
int ff(int w, vector<int>&p, vector<int>&wt) {

	int n = p.size();
	vector<int>prev(w + 1, 0), cur(w + 1, 0);

	for (int W = 0; W <= w; W++) {
		prev[W] = (int)(W / wt[0]) * p[0];
	}

	for (int ind = 1; ind < n; ind++) {
		for (int W = 0; W <= w; W++) {

			int take = INT_MIN;
			if (wt[ind] <= W) {
				take = p[ind] + cur[ W - wt[ind]];
			}
			int nottake = 0 + prev [W];

			cur[W] = max(take, nottake);
		}
		prev = cur;
	}

	return prev[w];
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, w; cin >> n >> w;
		vector<int>p(n), wt(n);
		for (int i = 0; i < n; i++)cin >> p[i];
		for (int i = 0; i < n; i++)cin >> wt[i];

		/*		vector<vector<int>>dp(n + 1, vector<int>(w + 1, -1));
				cout << f(n - 1, w, p, wt, dp) << endl;*/

		// cout << f(w, p, wt) << endl;
		cout << ff(w, p, wt) << endl;
	}


	return 0;
}