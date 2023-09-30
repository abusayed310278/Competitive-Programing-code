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

	int n; cin >> n;
	vvi res(8);
	res[0] = {7, 4, 2, 6};
	res[1] = {7, 5, 3, 6};
	res[2] = {7, 6, 3, 5};

	res[3] = {7, 6, 5, 4};
	res[4] = {7, 6, 5, 3};
	res[5] = {7, 6, 5, 2};
	res[6] = {7, 6, 5, 1};
	res[7] = {7, 6, 4, 1};

	if (n <= 7) {
		for (auto x : res[n]) {
			cout << x << " ";
		}
		cout << endl;
		return;
	} else {
		for (int i = 0; i < 3; i++) {
			cout << res[0][i] << " ";
		}
		cout << (res[0][3]^n) << endl;
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