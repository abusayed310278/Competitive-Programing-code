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


void solve() {

	int p1, p2, k; cin >> p1 >> p2 >> k;
	int n = p1 + p2;

	n /= k;

	if (n & 1) {
		cout << "cook\n";
	} else {
		cout << "chef\n";
	}


}



int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();
	}


	return 0;
}