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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi odd, even;
		int o = 0, e = 0;


		for (int i = 0; i < n; i++) {

			int x; cin >> x;
			if (x & 1) {
				odd.pb(x);
				o++;
			} else {
				even.pb(x);
				e++;
			}

		}

		if (o == 0 or e==0) {
			cout << -1 << endl;
			continue;
		}


		for (auto &x : odd) {
			cout << x << " ";

		}
		for (auto &x : even) {
			cout << x << " ";

		}

		cout << endl;


	}

	return 0;
}