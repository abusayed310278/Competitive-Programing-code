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

void solve() {

	int n; cin >> n;

	int cnt2 = 0, cnt10 = 0;
	while (n > 1 and n % 10 == 0) {cnt10++; n /= 10;}
	while (n > 1 and n % 2 == 0) {cnt2++; n /= 2;}

	cout << ((cnt2 <= cnt10 and n == 1) ? "Yes\n" : "No\n");

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