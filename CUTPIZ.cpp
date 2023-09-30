#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first;
#define s  second;
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

int gcd(int a, int b) {

	if (b == 0) {
		return a;
	}
	else {
		return gcd(a, a % b);
	}
}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vector<int>v(n + 1);

		int maxi = INT_MAX;
		for (int i = 0; i < n; i++) {
			cin >> v[i];

			if (i > 0) {

				maxi = min(maxi, v[i] - v[i - 1]);
			}

		}

		if (n == 1)cout << 1 << endl;

		int t = __gcd(360, maxi);

		int tot = 360 / t;


		cout << tot - n << endl;
	}

	return 0;
}