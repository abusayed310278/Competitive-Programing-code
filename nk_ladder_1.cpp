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

/*int f(int n, int k, vector<int>&dp) {

	if (n == 0)return 1;
	if (n < 0)return 0;
	if (dp[n] != 0)return dp[n];

	int ans = 0;
	for (int jump = 1; jump <= k; jump++) {

		ans += f(n - jump, k, dp);
	}

	return dp[n] = ans;

}*/



int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		int n, k; cin >> n >> k;
		vector<int>dp(n + 1, 0);

		dp[0] = 1;

		
		for (int i = 1; i <= n; i++) {

			for (int jump = 1; jump <= k; jump++) {
				if (i - jump >= 0)
					dp[i] += dp[i - jump];
			}
		}

		cout << dp[n] << endl;

	}

	return 0;
}


/*

1
4 3

*/