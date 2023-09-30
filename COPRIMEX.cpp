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

	int l, r; cin >> l >> r;

	// cout << 10000019 << endl; //solution 1

	/*while (++r, true) {
		int i;
		for (i = 2; i * i <= r; i++) {
			if (r % i == 0)break;
		}

		if (i * i > r)break;

	}

	cout << r << endl;*/ //solution 2


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