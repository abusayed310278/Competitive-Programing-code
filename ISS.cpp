#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define int long long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

int mod =1e9+7;
const int N = 4e5 + 1;
int fact[N];
int fact_inv[N];

int power(int x, int y, int p) {
	int res = 1;
	x = x % p;
	while (y > 0) {
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

int modi(int a, int m) {
	return power(a, m - 2, m);
}

void pre() {
	fact[0] = 1;
	for (int i = 1; i < N; i++) {
		fact[i] = (fact[i - 1] * i) % mod;
	}
	fact_inv[N - 1] = modi(fact[N - 1], mod);
	for (int i = N - 2; i >= 0; i--) {
		fact_inv[i] = (fact_inv[i + 1] * (i + 1)) % mod;
	}
}

int ncr(int n, int r) {
	if (r > n)
		return 0;
	return (fact[n] * ((fact_inv[r] * fact_inv[n - r]) % mod)) % mod;
}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		pre();
		int n, m; cin >> n >> m;
		vector<int>v(n);
		int p = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			if (v[i] >= 1 and v[i] <= m)p++;
		}

		if (n > m)cout << 0 << endl;

		int ans = (ncr(m, n) * fact[n]) % mod;

		for (int j = 1; j <= p; j++) {

			int val = ncr(p, j);
			val *= ncr(m - j, n - j);
			val %= mod;

			val *= fact[n - j];
			val %= mod;

			if (j & 1)ans -= val; else ans += val;

			ans %= mod;
			ans += mod;
			ans %= mod;
		}

		cout << ans << endl;

	}


	return 0;
}