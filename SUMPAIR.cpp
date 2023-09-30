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

		lli n , d; cin >> n >> d;
		vector<lli> a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		sort(begin(a), end(a));
		vector<lli> dp(n);
		dp[0] = 0;

		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		dp[1] = 0;
		if (a[1] - a[0] < d) {
			dp[1] = a[0] + a[1];

		}

		for (int i = 2; i < n; i++) {

			dp[i] = dp[i - 1];
			if (a[i] - a[i - 1] < d) {
				dp[i] = max( dp[i], a[i] + a[i - 1] + dp[i - 2] );
			}

		}

		cout << dp[n - 1] << endl;

	}

	return 0;
}