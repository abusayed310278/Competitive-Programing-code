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
	vi v(n);
	unordered_map<int, int>m;
	for (auto &x : v) {
		cin >> x;
		m[x]++;
	}

	sort(begin(v), end(v));

	int a = v[n - 1], b = v[n - 2];

	if (a == b) {
		int cnt = (n + 1) / 2;
		cout << (m[a] <= cnt ? "YES" : "NO") << endl;
		return;
	}

	cout << (m[b] < n - 1 ? "YES" : "NO") << endl;


}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}