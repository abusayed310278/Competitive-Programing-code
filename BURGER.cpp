#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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

	int x, y; cin >> x >> y;

	int temp = 0, ans = 0;
	for (int i = 0; i <= 60; i++) {

		if (y - temp == 0) {
			ans += 1;
			break;
		}

		if (y - temp == x) {
			ans += 2;
			break;
		}

		temp += (1 << i);
		ans++;
		y -= temp;

	}

	cout << ans << endl;

}


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		solve();


	}


	// cout << log2(pow(10, 18));

	return 0;
}