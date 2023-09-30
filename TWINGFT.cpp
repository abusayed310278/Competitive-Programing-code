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


void Anti(string &x, int n) {

	int sz = x.size() - 1;
	for (int i = 0; i < n; i++) {

		x = x[sz] + x;
		x.pop_back();

	}

}

void clock(string &x, int n) {

	int sz = x.size() - 1;
	for (int i = 0; i < n; i++) {

		x = x + x[0] ;
		x.pop_back();

	}

}


int32_t main()
{

	cp();
	int t = 1; cin >> t;
	while (t--) {


		int n, k; cin >> n >> k;
		vi a(n);

		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];

		}
		sort(rbegin(a), rend(a));

		int twin1 = 0, twin2 = 0;
		int i = 0;
		while (k--) {

			twin1 += a[i];
			twin2 += a[i + 1];
			i += 2;
		}
		twin2 += a[i];

		// int ans = max(twin1, twin2);

		cout << max(twin1, twin2) << endl;

	}

	return 0;
}