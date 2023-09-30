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
int N = 4e5 + 5;

vi isPrime(N, 1);
vi prime;

void pre() {

	isPrime[0] = isPrime[1] = 0;

	for (int i = 2; i <= N; i++) {

		if (isPrime[i]) {
			prime.pb(i);
			for (int j = i * i; j <= N; j += i) {
				isPrime[j] = 0;
			}
		}
	}

}


void solve() {

	int n; cin >> n;
	vi b(n);
	for (int i = 0; i < n; i++)cin >> b[i];

	vi ans(n);
	unordered_map<int, int>m;
	for (int i = 0; i < n; i++) {

		int ele = b[i];

		if (m.find(ele) != m.end()) {
			ans[i] = m[ele];

		} else {
			ans[i] = prime[i];
			m[ele] = ans[i];
		}
	}

	for (auto x : ans)cout << x << " ";
	cout << endl;
}


int32_t main()
{
	pre();
	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}