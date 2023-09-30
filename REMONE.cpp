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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>a(n), b(n - 1);
		unordered_set<int>s;


		for (int i = 0; i < n; i++) {cin >> a[i]; s.insert(a[i]);}
		for (int i = 0; i < n - 1; i++)cin >> b[i];

		sort(begin(a), end(a));
		sort(begin(b), end(b));
		int ans = b[0] - a[1];

		for (auto i : b) {

			if (s.count(i - ans) == 0) {
				ans = b[0] - a[0];
				break;
			}
		}

		if (ans <= 0)ans = b[0] - a[0];
		cout << ans << endl;

	}

	return 0;
}