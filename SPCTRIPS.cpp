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
int M = 1e5 + 5;
vvi fact(M);

void pre() {

	for (int i = 1; i < M; i++) {
		for (int j = 2 * i; j < M; j += i) {
			fact[j].pb(i);
		}
	}

}

int main()
{
	pre();
	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		int ans = 0;
		for (int i = 2; i <= n; i++) {

			int factors = fact[i].size();
			int x = n - (n % i);
			ans += ((x / i) * factors);

			for (int j = 0; j < factors; j++) {
				if (x + fact[i][j] <= n)ans++;
			}

		}

		cout << ans << endl;
	}

	return 0;
}