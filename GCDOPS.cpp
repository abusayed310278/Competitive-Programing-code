#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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

int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++)cin >> a[i];

		int flag = 0;
		for (int i = 0; i < n; i++) {

			if ( (__gcd(i + 1, a[i])) == a[i])continue;
			else {
				flag = 1; break;
			}

		}

		if (flag)cout << "NO\n"; else cout << "YES\n";

	}

	return 0;
}