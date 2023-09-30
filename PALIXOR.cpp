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

vi p;
void pre() {

	for (int i = 0; i < 32768; i++) {
		string s = to_string(i);
		string rs = s;
		reverse(begin(rs), end(rs));
		if (s == rs)p.pb(i);
	}

}


int32_t main()
{

	cp();
	pre();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		unordered_map<int, int>m;
		int ans = 0;
		for (auto x : v) {
			++m[x];
			for (auto y : p) {
				ans += m[y ^ x];
			}
		}

		cout << ans << endl;

	}

	return 0;
}