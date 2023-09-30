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


int main()
{

	cp();
	int t=1;
	while (t--) {

		int n, q;; cin >> n >> q;
		vi pf(n + 1);
		for (int i = 1; i <=n; i++) {
			int x; cin >> x;
			pf[i] = pf[i - 1] ^ x;
		}

		while (q--) {
			int k; cin >> k;
			cout << pf[k % (n + 1)] << endl;
		}

	}

	return 0;
}