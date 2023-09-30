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



int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		int k; cin >> k;
		k--;

		int ans = 0, m = 1;
		while (k) {

			ans += 2 * (k % 5) * m;
			k /= 5;
			m *= 10;
		}

		cout << ans << endl;

	}

	return 0;
}