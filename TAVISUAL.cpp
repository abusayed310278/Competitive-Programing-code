#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
// #define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;

void op() {


}


void solve() {

	int n, c, q; cin >> n >> c >> q;


	while (q--) {

		int l, r; cin >> l >> r;
		if (c >= l and c <= r)
			c = r - c + l;

	}

	cout << c << endl;

}

int main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}