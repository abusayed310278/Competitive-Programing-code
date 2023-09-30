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

	int a; cin >> a;
	int take = 0, give = 0, d = 0, d1 = 0, d2 = 0, maxi = 0;

	while (take >= give) {

		if (maxi < (take - give)) {
			maxi = take - give;
			d2 = d;
		}
		d1 = d;
		give += (1LL << d);
		take += a;
		d++;
	}

	cout << d1 << " " << d2 << endl;

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