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

	int n, k; cin >> n >> k;
	int ans = 0;

	for (int i = 1; i <= k; i++) {

		ans = max(ans, n % i);
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