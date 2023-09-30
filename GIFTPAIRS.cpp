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
int N = 1e3 + 5;

vi fact(N, 0), invfact(N, 0);


void pre() {

	fact[0] = invfact[1] = 1;
	for (int i = 2; i < N; i++) {

		fact[i] = (i * fact[i - 1]) % mod;

		invfact[i] = (1 / fact[i]) % mod;

	}

}


int ncr(int n, int r) {

	if (n < r or n < 0 or r < 0)return 0;

	return (fact[n] * invfact[r] * invfact[n - r]) % mod;


}

void solve() {

	int n; cin >> n;
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}


	vector<bool>assigned(n + 1, false);
	for (auto x : a) {
		assigned[x] = true;
	}

	int k = 0, b = 0;
	for (int i = 1; i <= n; i++) {

		if (!assigned[i]) {
			k++;

			if (a[i - 1] == 0)b++;
		}


	}

	if (k == 0) {
		cout << 0 << endl;
		return;
	}

	int ans = fact[k] % mod;

	for (int i = 1; i <= b; i++) {

		int res = (ncr(b, i) * fact[k - i]) % mod;
		if (i & 1) {
			ans += res;
		} else {
			ans -= res;
		}

	}


	cout << ans << endl;
}



int main()
{

	cp();
	pre();
	int t; cin >> t;
	while (t--) {

		solve();

	}


	return 0;
}