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



const int mod = 1e9 + 7;

void solve() {

	int n, m, x, k; cin >> n >> m >> x >> k;

	string s; cin >> s;

	int e = 0, o = 0;
	for (char ch : s) {
		if (ch == 'E')e++; else o++;
	}

	int ep = 0, op = 0;

	if (m % 2 == 0) {
		ep = m / 2;
		op = m / 2;
	} else {
		ep = m / 2;
		op = m / 2 + 1;
	}

	if (ep * x + op * x < n) {
		cout << "no\n";
	} else {

		if (min(e, ep * x) + min(o, op * x) >= n) {
			cout << "yes\n";
		} else {
			cout << "no\n";
		}
	}


}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}