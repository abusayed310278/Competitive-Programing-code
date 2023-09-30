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

const int mod = 1e9 + 7;


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vvi a(n, vi(3));

		for (int i = 0; i < n; i++)cin >> a[i][0] >> a[i][1] >> a[i][2];


		vi dp(n);
		sort(begin(a), end(a));
		dp[0] = a[0][2];

		int ans = dp[0];
		for (int i = 1; i < n; i++) {

			dp[i] = a[i][2];

			for (int j = 0; j < i; j++) {
				if (a[j][1] <= a[i][0]) {
					dp[i] = max(dp[i], dp[j] + a[i][2]);
				}
			}
			ans = max(ans, dp[i]);
		}

		cout << ans << endl;
	}
	return 0;
}

