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



void solve() {

	int n, m; cin >> m >> n;

	if (n > m) {
		cout << "NO\n";
		return;
	}

	int x = m;
	while (x % 2 == 0) {x /= 2;}

	// cout << endl << x << endl;

	cout << ((n % x == 0) ? "YES" : "NO") << endl;



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