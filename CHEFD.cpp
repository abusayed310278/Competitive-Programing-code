#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
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


int main()
{

	cp();
	int t = 1;
	while (t--) {

		int n; cin >> n;
		vi a(n + 1);
		for (int i = 1; i <= n; i++)cin >> a[i];

		int q; cin >> q;
		while (q--) {

			int type; cin >> type;
			if (type == 1) {
				int l, r, p; cin >> l >> r >> p;

			} else if (type == 2) {

				int l, d; cin >> l >> d;
				a[p] = d;
			}

		}

	}

	return 0;
}