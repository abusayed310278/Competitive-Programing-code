#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define int long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;



const int mod = 1e9 + 7;

void solve() {


	int a, b, c; cin >> a >> b >> c;

	int flag = 0;
	for (int x = 0; x < 30 ; x++) {

		int w = ((a >> x) & 1);
		int y = ((b >> x) & 1);
		int z = ((c >> x) & 1);

		if (w == y && y != z) {
			flag ^= 1;
		}

	}

	cout << (!flag ? "YES" : "NO") << endl;

}

int32_t main()
{


	int t = 1; cin >> t;
	while (t--) {

		solve();


	}

	return 0;
}