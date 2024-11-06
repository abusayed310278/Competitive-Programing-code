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

	int n, x, k; cin >> n >> x >> k;
	vi a(n), b(n);

	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++)cin >> b[i];


	int c = 0;
	for (int i = 0; i < n; i++) {

		int d = abs(a[i] - b[i]);
		if (d <= k) {
			c++;
		}
	}

	cout << (c >= x ? "YES" : "NO") << endl;


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}