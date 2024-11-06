#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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
vi f(100);
void pre() {

	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 100; i++)f[i] = f[i - 1] + f[i - 2];

}


void solve() {

	int n; cin >> n;
	int i;
	for (i = 0;; i++)if (f[i] > n)break;

	cout << i - 2 << endl;
}


int32_t main()
{
	cp();
	pre();
	int t; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}