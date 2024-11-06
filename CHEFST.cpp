#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;



const int mod = 1e9 + 7;

void solve() {

	int ans = 10000000;
	int n, m, k, l, r; cin >> n >> m >> k >> l >> r;
	for (int i = 0; i < n; i++) {

		int c, p; cin >> c >> p;

		for (int j = 0; j < m; j++) {

			if (c > k)c--;
			else if (c < k)c++;

		}

		if (l <= c and c <= r)ans = min(ans, p);

	}

	if (ans == 1e7)
		cout << -1 << endl;
	else
		cout << ans << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}