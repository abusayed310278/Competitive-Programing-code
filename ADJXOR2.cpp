#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;


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
	while (t--) {

		int n, x; cin >> n >> x;
		vector<ll>a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		vvll dp(n, vll(2, 0));

		for (int i = 1; i < n; i++) {

			dp[i][1] = max(dp[i][1], ((a[i] + x) ^ a[i - 1]) + dp[i - 1][0]);
			dp[i][1] = max(dp[i][1], ((a[i] + x) ^ a[i - 1] + x) + dp[i - 1][1]);
			dp[i][0] = max(dp[i][0], (a[i] ^ (a[i - 1] + 0)) + dp[i - 1][0] );
			dp[i][0] = max(dp[i][0], (a[i] ^ (a[i - 1] + x)) + dp[i - 1][1] );

		}

		cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;

	}

	return 0;
}