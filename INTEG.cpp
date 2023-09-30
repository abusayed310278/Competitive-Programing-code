#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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

	int n; cin >> n;
	vi a(n);
	multiset<int>s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}

	int cur = 0;
	ll ans = 0;

	int x; cin >> x;
	while (s.size()) {

		int u = *s.rbegin() + cur;
		s.erase(s.find(u - cur));
		if (u > 0)continue;

		if (s.size() + 1 > x) {
			cur -= u;
			ans -= 1LL * u * x;
		} else {
			ans -= u;
		}


	}

	cout << ans << endl;

}



int main()
{

	cp();
	int t = 1;
	while (t--) {
		solve();

	}

	return 0;
}