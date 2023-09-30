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



signed main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;

		int odd = 0, sum = 0, ans = 0;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			sum += x;
			if (x & 1)odd++;
		}
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			sum += x;
			if (x & 1)odd--;
		}

		ans = (sum - abs(odd)) / 2;
		cout << ans << endl;

	}

	return 0;
}