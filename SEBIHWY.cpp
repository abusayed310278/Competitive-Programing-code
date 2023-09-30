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

void solve() {

	int s, sg, fg, d, t; cin >> s >> sg >> fg >> d >> t;

	double cur = s + (double)(180 * d) / t;

	double sebi = abs(sg - cur);
	double fat = abs(fg - cur);


	if (sebi == fat) {
		cout << "DRAW\n";
		return;
	}
	else if (sebi < fat) {
		cout << "SEBI\n";
		return;
	} else {
		cout << "FATHER\n";
	}


}


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}