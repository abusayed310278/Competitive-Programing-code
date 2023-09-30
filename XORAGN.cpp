#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, val, ans; cin >> n;

		for (int i = 1; i <= n; i++) {

			int val; cin >> val;
			val = 2 * val;
			if (i == 1) {
				ans = val;
			} else {
				ans = ans ^ val;
			}
		}

		cout << ans << endl;


	}

	return 0;
}