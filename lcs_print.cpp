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


//bottom up
int f(string &s, string &t) {

	int n = s.size(), m = t.size();
	vector<vector<int>>dp(n + 1, vector<int>(m + 1, 0));

	for (int j = 0; j <= m; j++)dp[0][j] = 0;//when i=0
	for (int i = 0; i <= n; i++)dp[i][0] = 0;//when j=0


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

		//bottom up
		cout << f(s, t) << endl;
	}


	return 0;
}