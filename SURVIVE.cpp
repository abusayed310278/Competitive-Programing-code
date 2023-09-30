#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
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


void solve() {

	int n, k, s; cin >> n >> k >> s;

	int sun = s / 7;
	int required = k * s;

	int wek = s - sun;
	int buy = ceil((double)required / (double)n);

	if (n < k) {
		cout << -1 << endl;
		return;

	}

	if (buy > wek) {
		cout << -1 << endl;
		return;
	}

	cout << buy << endl;
}




int main()
{


	cp();
	int t = 1; cin >> t;
	while (t--) {

		solve();
	}

	return 0;
}