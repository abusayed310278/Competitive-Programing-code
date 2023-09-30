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
		vi a(n, 0);
		for (int i = 0; i < n; i++)cin >> a[i];

		vi cnt(31, 0);
		for (int b = 30; b >= 0; b--) {
			for (int j = 0; j < n; j++) {
				if ((1 << b)&a[j])cnt[b]++;
			}
		}

		int ans = 0;
		for (int i = 30; i >= 0; i--) {
			if (cnt[i] > 1)ans += (1 << i);
		}

		cout << ans << endl;

	}

	return 0;
}