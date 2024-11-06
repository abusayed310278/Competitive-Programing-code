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

struct mine {
	int g, a, b;
};

void solve() {
	int n; cin >> n;
	vector<mine>arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].g >> arr[i].a >> arr[i].b;
	}

	long double ans1 = 0.0, ans2 = 0.0;

	for (auto x : arr) {
		ans1 = ans1 + (1.0 * x.g * x.b) / (x.a + x.b);
		ans2 = ans2 + (1.0 * x.g * x.a) / (x.a + x.b);
	}

	cout << fixed << setprecision(10) << ans1 << " " << ans2 << endl;

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