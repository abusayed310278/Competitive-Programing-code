#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int p, q, r; cin >> p >> q >> r;
		int ans = 1;
		for (int i = 0; i <= 20; i++) {
			int c= (p & (1 << i)) != 0;
			c += (q & (1 << i)) != 0;
			c += (r & (1 << i)) != 0;

			if (c == 1)ans = 0; else if (c == 3)ans *= 4;
		}

		cout << ans << endl;

	}

	return 0;
}