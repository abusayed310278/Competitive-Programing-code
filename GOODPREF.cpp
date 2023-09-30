#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
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

void solve() {

	string s; cin >> s;
	int n; cin >> n;


	vi dp(1005, 0);
	for (int i = 0; i < s.size(); i++) {

		if (s[i] == 'a') {
			a++;
			dp[i + 1] = dp[i] + 1;
		} else {
			b++;
			dp[i + 1] = dp[i] + 1;
		}

	}

	int ans = 0;
	if (a == b) {

		for (int i = 1; i <= s.size(); i++)ans += dp[i] > 0;
		cout << n*ans << endl;

	} else {

		int temp = 0;

		for (int i = 1; i <= s.size(); i++) {
			ans += (temp + dp[i]) > 0;
			temp += (a - b);
		}


		cout << ans << endl;

	} else {



	}



}

int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}