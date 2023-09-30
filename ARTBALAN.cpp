#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

	string s; cin >> s;
	int n = s.size();

	vi v(26);
	for (int i = 0; i < n; i++) {

		v[s[i] - 'A']++;
	}

	sort(rbegin(v), rend(v));

	int ans = n;
	for (int i = 1; i <= 26; i++) {

		if (n % i == 0) {
			int goal = (int)(n / i);
			int same = 0;
			for (int j = 0; j < i; j++) {
				same += min(v[j], goal);
			}
			ans = min(ans, n - same);
		}

	}

	cout << ans << endl;



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