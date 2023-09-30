#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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
int N = 10e6 + 5;
vi fact(N, 0);

void pre() {

	fact[1] = 1;
	fact[2] = 2;
	for (int i = 3; i < N; i++) {
		fact[i] = (fact[i - 1] * i) % mod;
	}

}

signed main()
{

	cp();
	pre();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;

		int ans = 0;
		for (int i = 1; i <= n; i++) {
			int x; cin >> x;
			ans = (ans + fact[x]) % mod;
		}

		cout << ans % mod << endl;

	}


	return 0;
}