#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
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
const double error = (double)1 / (double)120;


void solve() {

	int n; cin >> n;

	for (int h = 0; h < 12; h++) {

		for (int m = 0; m < 60; m++) {

			double angle = fabs(((float)60 * (double)h) - ((float)11 * (double)m)) / (float)2;

			if (angle > (float)180) {
				angle = (float)360 - angle;
			}

			double d = abs(n - (angle));
			if (d < error) {
				printf("%.2d:%.2d\n", h, m);
			}
		}
	}

}

int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}