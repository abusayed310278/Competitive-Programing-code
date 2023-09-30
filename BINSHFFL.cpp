#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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

	int a, b; cin >> a >> b;

	if (a == b) {
		cout << 0 << endl; return;
	}

	if (b == 0) {
		cout << -1 << endl; return;
	}


	if (b == 1) {

		if (a == 0) {
			cout << 1 << endl;
		} else {
			cout << -1 << endl;
		}

		return;
	}

	int aa = __builtin_popcount(a);
	int bb = __builtin_popcount(b - 1);

	if (aa > bb) {
		cout << 2 << endl;
	} else {
		cout << bb - aa + 1 << endl;
	}


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