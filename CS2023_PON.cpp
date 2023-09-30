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

		int n, b; cin >> n >> b;
		vi a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		int c = INT_MAX;
		for (int i = 0; i < n; i++) {

			if ((a[i] & b) == b)c &= a[i];
		}

		if (c == b)cout << "YES\n"; else cout << "NO\n";

	}

	return 0;
}