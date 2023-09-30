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

ll power(ll a, ll b) {

	if (b == 0)return 1;
	if (b == 1)return a;

	ll res = power(a, b / 2);

	if (b % 2 == 0)return (res * res) % mod;

	return ((res * res) % mod * a) % mod;


}




int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		sort(begin(a), end(a));

		int add = 0, sub = 0;
		for (int i = 0; i < n; i++) {

			int b = n - (i + 1), s = i;
			add = (add + a[i] * power(2, s)) % mod;
			sub = (sub + a[i] * power(2, b)) % mod;
		}

		cout << (add  - sub + mod) % mod << endl;


	}

	return 0;
}