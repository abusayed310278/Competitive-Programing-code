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

void solve() {

	int n, k, s; cin >> n >> k >> s;

	vi b(n);
	int sc = s;
	int i = 0;

	while (i < min(n, 61LL)) {

		if (s % k == 0) {

		} else if (s % k == 1) {
			s--;
			b[i] = 1;
		} else {

			s++;
			b[i] = -1;

		}
		s /= k;
		i++;

	}

	int p = 1, sum = 0;
	for (int i = 0; i < n; i++) {
		sum += b[i] * p;
		p *= k;

	}

	if (sc != sum)cout << -2 << endl; else {
		for (auto &x : b)
			cout << x << " ";
	}
	cout << endl;

}


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}