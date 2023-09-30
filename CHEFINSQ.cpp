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


int main()
{

	cp();
	int t; cin >> t;

	int n, k; cin >> n >> k;
	vector<int>v(n + 1);
	for (int i = 1; i <= n; i++)cin >> v[i];

	sort(v.begin() + 1, v.end());

	int ans = 0, mx = 0, c = 0, x = 0;
	for (int i = 1; i <= k; i++) {
		ans += v[i];
		mx = max(mx, v[i]);
	}

	for (int i = 1; i <= n; i++) {
		if (v[i] == mx)c++;
	}

	for (int i = 1; i <= k; i++) {
		if (v[i] == mx)x++;
	}


	vector<vector<int>>dp(c + 1, vector<int>(x + 1, 0));//ncr compute
	for (int i = 0; i <= c; i++) {
		for (int j = 0; j <= x; j++) {

			if (j == 0 || j == i) {
				dp[i][j] = 1;
			} else if (i != 0) {
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
			}
		}
	}

	cout << dp[c][x] << endl;

	return 0;
}