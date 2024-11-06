#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;



const int mod = 1e9 + 7;

void solve() {

	int a, b, n; cin >> a >> b >> n;

	int ans = INT_MAX;
	for (int i = n; i >= 1; i--) {

		int l = (a * i) / __gcd(a, i);

		if (l < n)break;


		ans = min(ans, l);



	}

	cout << ans << endl;

}

int32_t main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}