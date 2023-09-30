#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
#define ll long long

#define F  first;
#define S  second;
#define pb  push_back;

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

	int ans = 0;
	unordered_map<string, string>cst, next;
	unordered_map<string, int>cnt;
	set<string>s;

	int n; cin >> n;
	for (int i = 1; i < n; i++) {

		string a, b, c; cin >> a >> b >> c;
		ans +=stoll(c);
		next[a] = b;
		cst[a] = c;
		cnt[b]++;

		s.insert(a);
	}

	string cur = "";
	for (auto &x : s) {
		if (!cnt[x])cur = x;
	}

	n--;
	while (n--) {
		cout << cur << " " << next[cur] << " " << cst[cur] << endl;
		cur = next[cur];
	}

	cout << ans <<"$"<< endl;


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