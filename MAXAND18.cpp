#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define lli long long
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

bool cmp(pair<int, int>p1, pair<int, int>p2) {

	if (p1.F == p2.F)return p1.S < p2.S;


	return p1.F > p2.F;
}

void solve() {

	int n, k; cin >> n >> k;
	vi a(n);
	int b[35] = {0};

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j <= 30; j++) {
			int x = (1LL << j);
			if ( (x & a[i]) != 0)b[j]++;

		}
	}

	int k1 = k;
	vector<pair<int, int>>v;
	for (int i = 30; i >= 0; i--) {
		int s = b[i] * (1LL < i);
		v.pb({s, i});
	}

	sort(begin(v), end(v), cmp);

	int ans = 0;
	for (int i = 0; i < v.size(); i++) {

		if (k >= 1) {
			int z = v[i].S;
			ans = ans + (1LL << z);
			k--;
		}

	}

	cout << ans << endl;

}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	// cout<<log2(pow(10,9));

	return 0;
}