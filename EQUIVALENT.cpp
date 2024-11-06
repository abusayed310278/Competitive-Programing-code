#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define int long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;
using vvp = vector<pair<int, int>>;


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

vi primes(1e6 + 1, 1);
vi prime;

void sieve() {

	primes[0] = primes[1] = 0;
	for (int i = 2; i * i <= 1e6; i++) {

		if (primes[i]) {
			prime.pb(i);
			for (int j = i * i; j <= 1e6; j += i) {
				primes[j] = 0;
			}
		}
	}

	for (int i = 1e3 + 1; i <= 1e6; i++) {
		if (primes[i])prime.pb(i);
	}

}

vvp factors(int n) {

	vvp fac;
	for (int i = 0; i < prime.size() and prime[i]*prime[i] <= n; i++) {

		int c = 0;
		int x = prime[i];
		while (n % x == 0) {
			c++;
			n /= x;
		}
		if (c > 0) {
			fac.pb({x, c});
		}

	}

	if (n > 1) {
		fac.pb({n, 1});
	}

	return fac;

}

void solve() {

	int a, b; cin >> a >> b;
	vvp fac_a = factors(a);
	vvp fac_b = factors(b);

	set<pair<int, int>>s;
	int n = fac_a.size(), m = fac_b.size();
	if (n != m) {
		cout << "NO\n"; return;
	}

	bool flag = 1;

	for (int i = 0; i < n; i++) {

		if (fac_a[i].F != fac_b[i].F) {
			flag = 0; break;
		}

		int x = fac_a[i].S, y = fac_b[i].S;
		int g = __gcd(x, y);
		x /= g, y /= g;

		s.insert({x, y});

	}



	if (flag and s.size() == 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

}

int32_t main()
{

	sieve();
	cp();
	int t; cin >> t;
	while (t--) {

		solve();

	}

	return 0;
}