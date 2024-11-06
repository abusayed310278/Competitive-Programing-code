#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define int long long
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

bool isVowel(char c) {

	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve() {

	int n, k; cin >> n >> k;
	string s; cin >> s;

	int res = 1, lastidx = -1, vowelcnt = 0;
	for (int i = 0; i < n; i++) {

		if (isVowel(s[i])) {

			if (vowelcnt == 0 and lastidx != -1)
				res = (res * (i - lastidx)) % mod;

			vowelcnt++;

			if (vowelcnt == k) {
				vowelcnt = 0;
				lastidx = i;
			}
		}


	}

	cout << res << endl;

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