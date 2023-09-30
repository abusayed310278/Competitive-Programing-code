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

ll mod = (ll)1e9 + 7;


int32_t main()
{

	cp();
	int t = 1;
	while (t--) {

		ll n; cin >> n;


		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			sum += x;
			sum %= mod;

		}

		if (sum < 0)sum += mod;

		ll q; cin >> q;
		while (q--) {

			sum += sum;
			if (sum >= mod)sum -= mod;
			cout << sum << endl;
		}


	}

	return 0;
}