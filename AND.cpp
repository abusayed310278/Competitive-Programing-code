#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

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


signed main()
{

	cp();
	int t = 1;
	while (t--) {

		int n; cin >> n;
		vi a(n + 1);
		for (int i = 0; i < n; i++)cin >> a[i];

		int ans = 0;
		for (int j = 0; j <= 30; j++) {

			int c = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] & (1 << j))c++;
			}
			ans += 1LL * (1 << j) * (c * (c - 1)) / 2;

		}

		cout << ans;

	}

	return 0;
}