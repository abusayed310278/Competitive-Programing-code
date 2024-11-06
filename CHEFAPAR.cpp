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
	int cost = 0, zero = n + 1;
	for (int i = 1; i <= n; i++) {

		int x; cin >> x;
		if (x == 0) {
			zero = min(i, zero);
			cost += 1000;
		}
	}

	cout << cost + (n - zero + 1) * 100 << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}