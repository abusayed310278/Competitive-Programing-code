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

	int n; cin >> n;
	vi a(n + 1, 0), pre(n + 1, 0);
	for (int i = 1; i <= n; i++)cin >> a[i];

	unordered_map<int, int>f, ex;
	f[0] = 1;

	int ans = 0;
	for (int i = 1; i <= n; i++) {

		pre[i] = pre[i - 1] ^ a[i];

		if (f[pre[i]]) {
			ans += (i - 1) * f[pre[i]] - ex[pre[i]];
		}

		f[pre[i]]++;
		ex[pre[i]] += i;


	}

	cout << ans << endl;

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