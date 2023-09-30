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
		vector<int>v(n);

		int g = 0;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			g = __gcd(g, v[i]);
		}

		int cur = 0, c = 0;
		for (int i = 0; i < n; i++) {
			cur = __gcd(cur, v[i]);

			if (cur == g) {
				c++;
				cur = 0;
			}

			if (c == k)break;
		}

		if (c == k)cout << "YES\n"; else cout << "NO\n";

	}

	return 0;
}