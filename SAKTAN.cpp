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

		int n, m, q; cin >> n >> m >> q;

		vi r(n,0), c(m,0);
		while (q--) {

			int x, y; cin >> x >> y;
			r[x - 1]++;
			c[y-1]++;

		}

		int odd_row = 0, even_col = 0, odd_col = 0, even_row = 0;

		for (int i = 0; i < n; i++) {
			if (r[i] & 1)odd_row++; else even_row++;
		}

		for (int i = 0; i < n; i++) {
			if (c[i] & 1)odd_col++; else even_col++;
		}

		cout << odd_row*even_col + odd_col*even_row << endl;

	}

	return 0;
}