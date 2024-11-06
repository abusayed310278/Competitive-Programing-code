#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;



const int mod = 1e9 + 7;

void solve() {

	int x, y; cin >> x >> y;

	if (x % 2 == 0 && (y % 2 == 0 || x > 0)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

}

int32_t main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}