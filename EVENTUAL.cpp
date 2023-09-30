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

	int n; cin >> n;
	string s; cin >> s;

	vi cnt(26);

	for (int i = 0; i < n; i++) {
		cnt[s[i] - 'a']++;
	}

	// for (int i = 0; i < 26; i++)cout << cnt[i] << endl;

	bool flag = true;
	for (auto x : cnt) {
		if (x & 1) {flag = false; break;}

	}

	if (flag)cout << "YES\n"; else cout << "NO\n";


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