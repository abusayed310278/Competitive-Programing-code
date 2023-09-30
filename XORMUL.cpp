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

		vi x(2);
		int n; cin >> n >> x[0] >> x[1];

		int ans = 1;
		for (int i = 0; i < 2; i++) {
			int mask = 0;
			for (int bit = 30; bit >= 0; bit--) {
				if ((1 << bit)&x[i]) {
					mask += (1 << bit);
					break;
				}
			}
			ans *= (x[i] ^ mask);
		}

		cout << ans << endl;
	}

	return 0;
}