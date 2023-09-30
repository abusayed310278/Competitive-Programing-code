#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first
#define ld long double

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
const ld eps = 1e12;

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ll h, s; cin >> h >> s;

		if (h * h - 4 * s < 0) {
			cout << -1 << endl;
			continue;
		}

		double p = 1.0 * sqrt(h * h + 4 * s);
		double q = 1.0 * sqrt(h * h - 4 * s);

		double a = 1.0 * (p + q) / 2;
		double b = 1.0 * (p - q) / 2;

		if (a > b)swap(a, b);

		cout << fixed << setprecision(5) << a << " " << b << " " << 1.0 * h << endl;

	}


	return 0;
}