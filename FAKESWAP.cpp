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

		int n; cin >> n;
		string s, p; cin >> s >> p;

		int cnt = count(begin(p), end(p), '1');
		if (cnt == n or cnt == 0) {

			if (s == p) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}

		} else {
			cout << "YES\n";
		}

	}

	return 0;
}