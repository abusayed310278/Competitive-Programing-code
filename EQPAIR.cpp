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



const int mod = 1e9 + 7;


void solve() {

	int n; cin >> n;
	unordered_map<int, int>m;
	for (int i = 0; i < n; i++) {

		int x; cin >> x;
		m[x]++;
	}

	lli ans = 0;

	for (auto x : m) {

		lli y = x.S;

		ans += 1LL * y * (y - 1) / 2;
	}

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