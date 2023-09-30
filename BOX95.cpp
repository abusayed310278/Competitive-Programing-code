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

int log2(int n) {

	int i = 0;
	while ((1LL << i) <= n)i++;

	return i;
}


int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n);
		int mx = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mx = max(mx, a[i]);
		}

		int mlog = log2(mx);
		int c = 0;
		for (int i = 0; i < n; i++) {

			int bit = log2(a[i]);
			if (bit == mlog) {c++;}

		}

		// assert(c % 2 != 0);
		// int ans = (c + 1) / 2;
		cout << (c + 1) / 2 << endl;


	}

	return 0;
}