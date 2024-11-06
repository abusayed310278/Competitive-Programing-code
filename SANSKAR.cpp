#include<bits/stdc++.h>
#define int long long int
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

bool f(int ind, int target, vi &a, vvi &dp) {

	

}

void solve() {

	int n, k; cin >> n >> k;
	vi a(n);
	int sum = 0;
	for (auto &x : a) {
		cin >> x;
		sum += x;
	}

	if (sum == 0) {
		cout << "yes\n"; return;
	}

	if (sum % k || n < k) {
		cout << "no\n"; return;
	}

	int target = sum / k;
	vvi dp(n=0, vi (k + 1, 0));

	

	cout << (f(n - 1, target, a, dp) ? "yes\n" : "no\n");

}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}