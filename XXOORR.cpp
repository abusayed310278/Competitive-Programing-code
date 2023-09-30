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
	int t; cin >> t;
	while (t--) {


		int n, k; cin >> n >> k;
		vi v(n);
		for (int i = 0; i < n; i++)cin >> v[i];

		vi bit_cnt(32, 0);
		for (auto x : v) {

			int pos = 0;
			while (x > 0) {

				if (x & 1) {bit_cnt[pos]++;}
				x >>= 1;
				pos++;

			}
		}

		int ans = 0;
		for (auto x : bit_cnt) {
			// cout<<x<<" ";
			ans += ceil(x / k);
		}

		cout << ans << endl;
	}

	return 0;
}