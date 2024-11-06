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

	int k, a, b; cin >> k >> a >> b;

	if (k % 2 == 0 and abs(a - b) == k / 2) {
		cout << 0 << endl;
	} else {

		int d = abs(a - b);
		int ans = min(d - 1, k - d - 1);
		cout << ans << endl;
	}

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}