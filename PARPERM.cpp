#include<bits/stdc++.h>
#define endl "\n"
#define int long long
#define ll long long
#define l long
#define F  first
#define S  second
#define pb  push_back

using namespace std;

using vi = vector<int>;
using vvi = vector<vi>;




const int N = 1e5 + 5;
vi isPrime(N, 1);
vi spf(N);

void pre() {
	int i;
	for ( i = 1; i < N; i++) {
		spf[i] = i;
	}

	isPrime[0] = isPrime[1] = 0;
	for (int i = 2;  i * i <= N; i++) {

		if (isPrime[i]) {

			for (int j = i * i; j  <= N; j += i) {
				if (isPrime[j])spf[j] = i;
				isPrime[j] = 0;
			}
		}
	}

}

void solve() {

	int n, k; cin >> n >> k;

	vi v1, v2{1};
	int c1 = 0, c2 = 0;

	for (int i = 2; i <= n; i++) {

		if (!isPrime[i]) {

			c1++;
			v1.pb(i);
			continue;
		} else {

			if (i * 2 <= n) {
				c1++;
				v1.pb(i);
			} else {
				c2++;
				v2.pb(i);
			}

		}

	}


	if (k <= c2 or k >= c2) {

		cout << "YES\n";
		if (k <= c2) {
			for (int i = 0; i < k; i++)cout << v2[i] << ' ';
		} else {
			for (auto x : v1)cout << x << ' ';
			for (int i = 0; i < k - c1; i++)cout << v2[i] << ' ';
		}

		cout << '\n';


	} else {
		cout << "NO\n";
	}


}


int32_t main()
{
	ios::sync_with_stdio(false); cin.tie(0);

	pre();

	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}