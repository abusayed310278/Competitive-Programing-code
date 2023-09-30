#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

	int x, a, b; cin >> x >> a >> b;

	int n = b * x;
	if (n % a != 0) {
		cout << -1 << endl;
		return;

	}

	n /= a;
	if (n > mod) {
		cout << -1 << endl;
		return;
	}

	int sum = 0;
	for (int i = 1; i * i <= n; i++) {

		if (n % i == 0) {

			sum += i;
			if (i != n / i) {
				sum += n / i;
			}

		}

	}

	if (sum == x)cout << n << endl; else cout << -1 << endl;


}



int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}