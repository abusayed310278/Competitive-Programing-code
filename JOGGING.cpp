#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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


int power(int a, int n) {

	a %= mod;
	int res = 1;
	while (n > 0) {
		if (n & 1) {
			res = (res * a) % mod;
		}
		a = (a * a) % mod;
		n = (n >> 1);
	}

	return res % mod;

}


signed main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, x; cin >> n >> x;
		int ans = (power(2, n - 1) * x) % mod;
		cout << ans % mod  << endl;

	}

	return 0;
}