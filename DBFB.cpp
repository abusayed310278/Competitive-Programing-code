#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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
const int N = 10000 + 5;


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, m; cin >> m >> n;

		ll a = 0, b = 0;
		for (int i = 1; i <= m; i++) {

			ll x; cin >> x;
			a += x;
		}

		for (int i = 1; i <= m; i++) {

			ll x; cin >> x;
			b += x;
		}

		a %= mod;
		b %= mod;

		a *= m; a %= mod;
		b *= m; b %= mod;


		ll x[n];
		if (n == 1) {
			cout << a << endl;
		} else {

			x[0] = a;
			x[1] = b;

			for (int i = 2; i <= n; i++) {

				x[i] = (x[i - 1] + x[i - 2]) % mod;
			}

			cout << x[n - 1] << endl;
		}


	}

	return 0;
}