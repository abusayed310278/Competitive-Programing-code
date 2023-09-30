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

	int n; cin >> n;
	string s; cin >> s;

	if (n & 1) {
		cout << "NO\n";
		return;
	}


	cout << "YES\n";
	int dif = count(begin(s), end(s), '1') - count(begin(s), end(s), '0');

	int cur = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			cur -= 1;
		}
		else {
			cur += 1;
		}

		if (2 * cur == dif) {
			cout << 1 << " " << i + 1 << endl;
			break;
		}
	}



}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		solve();

	}


	return 0;
}