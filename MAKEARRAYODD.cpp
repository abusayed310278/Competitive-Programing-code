#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
#define F  first;
#define S  second;
#define pb  push_back;

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

int solve(int even, int odd, int x) {

	if (even == 0)return 0;
	if (x % 2 == 1)return (int)(even + 1) / 2;
	if (odd == 0)return -1;

	return even;

}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n, x; cin >> n >> x;
		vector<int>v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		int even = 0, odd = 0, cnt = 0;

		for (int i = 0; i < n; i++) {
			if (v[i] & 1)odd++; else even++;

		}

		int ans = solve(even, odd, x);

		cout << ans << endl;
	}

	return 0;
}