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

		ld h, ss; cin >> h >> ss;



		ld h2 = (h * h);
		ld maxi = sqrt(h2 / 2);

		if (ss < 1 || h2 / 4 < ss) {
			cout << -1 << endl;
			continue;
		}


		ld s = 0.0, e = maxi;

		while (s <= e) {

			ld b = (s + e) / 2;
			ld p = sqrt(h2 - b * b);
			ld area = (b * p) / 2;

			if (area >= s) {
				e = b - eps;
			} else {
				s = b + eps;
			}

		}

		ld b = s;
		ld p = sqrt(h2 - b * b);
		ld area = (b * p) / 2;

		if (b > p)swap(b, p);

		cout << fixed << setprecision(6) << b << " " << p << " " << h << endl;
		// assert(abs(area - ss) < 0.01);

	}


	return 0;
}