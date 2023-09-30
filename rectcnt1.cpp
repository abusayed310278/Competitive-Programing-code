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


inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}

const int mod = 1e9 + 7;
int maxwi = 1e5;

void solve(int n) {

	vector<pair<int, int>>points(n);
	for (int i = 0; i < n; i++) {

		// int x, y; cin >> x >> y;
		cin >> points[i].F >> points[i].S;

	}

	sort(begin(points), end(points));

	map<pair<int, int>, int>m;
	for (int i = 0; i < n - 1; i++) {

		if (points[i].F == points[i + 1].F)
			m[ {points[i].S, points[i + 1].S}] += 1;

	}

	int ans = 0;
	// map<pair<int, int>, int>::iterator it;
	for (auto it : m) {
		int n = it.S;
		ans += n * (n - 1) / 2;
	}

	cout << ans << endl;

}


int32_t main()
{

	cp();
	while (1) {
		int n; cin >> n;
		if (n == 0)break;
		solve(n);
	}

	return 0;
}