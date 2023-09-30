#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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

	ll n, x; cin >> n >> x;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)cin >> a[i];

	ll ans = 0;
	for (ll i = 0; i < 30; i++) {

		ll cnt = 0;
		for (auto x : a) {
			if (x & (1LL << i))cnt++;
		}

		if (cnt == 0 or cnt == n)continue;

		ll temp_y = 0;
		for (ll j = 29; j >= 0; j--) {

			if (j == i)continue;

			ll tempadd_y = 1LL << j;
			if (temp_y + tempadd_y > x)continue;
			temp_y += tempadd_y;

		}

		ans = max(ans, temp_y);

	}

	cout << ans << endl;

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