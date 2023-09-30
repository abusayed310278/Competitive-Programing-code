#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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
		vi a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		if (n >= 61) {
			cout << "NO\n";

		} else {

			set<int>s;
			for (int i = 0; i < n; i++) {
				int x = 0;
				for (int j = i; j < n; j++) {
					x |= a[j];
					s.insert(x);
				}
			}

			if (s.size() == n * (n + 1) / 2) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}

	}

	return 0;
}