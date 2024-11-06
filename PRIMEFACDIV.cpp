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

	ll a, b; cin >> a >> b;
	ll g = __gcd(a, b);

	while (b != 1) {

		ll x = __gcd(g, b);
		if (x == 1) {
			cout << "NO\n"; return;
		}
		b /= x;
	}

	cout << "YES\n"; return;

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();

	}

	return 0;
}