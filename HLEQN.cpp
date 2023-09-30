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

void solve() {

	int x; cin >> x;

	if (x < 5) {
		cout << "NO\n";
		return;
	}

	for (int a = 1; a * a <= x; a++) {

		int b = (x - 2 * a) % (a + 2);
		if (b == 0) {
			cout << "YES\n";
			return;
		}
	}

	cout << "NO" << endl;


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