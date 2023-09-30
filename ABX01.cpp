#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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

const int mod = 9;

int power(int a, int b) {

	a %= 9;
	int res = 1;

	while (b > 0) {

		if (b & 1)res = (res * a) % mod;

		b >>= 1;
		a = (a * a) % mod;

	}

	return res;

}


int POWER(int a, int n) {

	int p;

	if (n == 0)return 1;
	p = POWER(a, n / 2);

	p = (p * p) % mod;

	if (n & 1)p = (p * a) % mod;

	return p;
}


void solve() {

	int a, n; cin >> a >> n;

	int val = power(a, n);

	if (val % 9 == 0) {
		cout << 9 << endl;
	} else {
		cout << val % 9 << endl;
	}




}


int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {
		solve();
	}

	// cout<<log2(pow(10,18));

	return 0;
}