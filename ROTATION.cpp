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
	int t = 1;
	while (t--) {


		int n, m; cin >> n >> m;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int s = 0;
		while (m--) {

			char c; cin >> c; int d; cin >> d;

			if (c == 'C')s += d;
			else if (c == 'A')s -= d;
			else {

				int idx = (((s + d - 1) % n) + n) % n;
				cout << a[idx] << endl;
			}

		}


	}

	return 0;
}