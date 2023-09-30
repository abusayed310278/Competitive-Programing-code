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

	int x, y; cin >> x >> y;

	if (x > y)swap(x, y);

	int ans = 0;

	if (x == 0 and y == 0) {
		cout << 0 << endl;
		return;
	}

	else if (x == 0) {
		cout << -1 << endl;
		     return;
	} else {

		while (x < y) {
			x *= 2;
			ans++;

		}
		cout << ans + y << endl;
	}



}




int32_t main()
{


	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}