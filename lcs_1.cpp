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
int f(int i, int j, string &s, string &t, vector<vector<int>>&dp) {

	if (i < 0 || j <= 0)return 0;

	if (s[i] == t[j]) {
		return dp[i][j] = 1 + f(i - 1, j - 1, s, t, dp);
	} else
		return dp[i][j] = max(0 + f(i - 1, j, s, t, dp) , 0 + f(i, j - 1, s, t, dp));
}

//more optimized

int ff(int i, int j, string &s, string &t, vector<vector<int>>&dp) {

	if (i == 0 || j == 0)return 0;
	if (dp[i][j] != -1)return dp[i][j];

	if (s[i - 1] == t[j - 1]) {
		return dp[i][j] = 1 + ff(i - 1, j - 1, s, t, dp);
	} else
		return dp[i][j] = max(0 + ff(i - 1, j, s, t, dp) , 0 + ff(i, j - 1, s, t, dp));
}

//bottom up
int f(string &s, string &t) {

	int n = s.size(), m = t.size();
	vector<vector<int>>dp(n + 1, vector<int>(m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {


			if (s[i ] == t[j]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			} else {
				dp[i][j] = max(0 + dp[i - 1][j] , 0 + dp[i][j - 1]);
			}

		}
	}

	return dp[n][m];
}

int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		string s, t; cin >> s >> t;
		int n = s.size(), m = t.size();

		/*		//top down
				vector<vector<int>>dp(n, vector<int>(m, -1));
				cout << f(n - 1, m - 1, s, t, dp) << endl;*/

		//more optimized
		vector<vector<int>>dp(n + 1, vector<int>(m + 1, -1));
		cout << ff(n , m , s, t, dp) << endl;

		/*//bottom up
		cout << f(s, t) << endl;*/
	}


	return 0;
}