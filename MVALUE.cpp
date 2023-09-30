#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define lli long long
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

ll solve(ll a, ll b) {

	return (a * b) + a - b;
}

int main()
{

	cp();

	int t; cin >> t;
	while (t--) {

		ll n; cin >> n;
		vector<ll> a(n);
		for (ll i = 0; i < n; i++)cin >> a[i];

		sort(a.begin(), a.end());

		ll mx1 = solve(a[1], a[0]);
		ll mx2 = solve(a[n - 1], a[n - 2]);
		ll mx3 = solve(a[n - 1], a[0]);

		ll ans = max({mx1, mx2, mx3});

		cout << ans  << endl;

	}


	return 0;
}