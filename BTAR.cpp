#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
#define lli long long
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

	int n; cin >> n;
	vi a(n), fre(4);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		fre[a[i] % 4]++;
	}

	int ans = 0;
	if (sum % 4 != 0) {
		cout << -1 << endl;
		return;
	} else {

		ans += fre[2] / 2;
		fre[2] %= 2;

		int mi = min(fre[1], fre[3]);
		int mx = max(fre[1], fre[3]);

		ans += mi;
		int left = mx - mi;

		if (fre[2]) {
			ans += 2;
			left -= 2;
		}

		ans += 3 * (left / 4);

	}
	cout << ans << endl;


}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();

	}


	return 0;
}