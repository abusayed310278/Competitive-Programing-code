#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 998244353;


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		string s; cin >> s;
		int n = s.size();
		if (n == 1) {
			cout << 1 << endl;
			continue;
		}

		vector<int>dp(n + 1, 0);
		dp[0] = 1;
		dp[1] = 1 + (s[0] != s[1]);

		for (int i = 2; i < n; i++) {

			dp[i] = dp[i - 1];

			if (s[i] != s[i - 1]) {
				dp[i] = (dp[i] + dp[i - 2] ) % mod;

			}

					}

		cout << dp[n - 1] << endl;
	}

	return 0;
}