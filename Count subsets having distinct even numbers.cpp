#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long
#define l long
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

const int m = 1e9 + 7;

int power(int a, int b) {

	int res = 1;
	a %= m;

	while (b > 0) {

		if (b & 1)res = res * a % m;
		a = a * a % m;
		b >>= 1;

	}

	return res - 1;
}

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		set<int>s;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x % 2 == 0)s.insert(x);
		}

		// for (auto &x : s)cout << x << endl;
		int a = 2, b = s.size();
		cout << power(a, b) << endl;

	}


	return 0;
}