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

		int a, b; cin >> a >> b;

		if (__gcd(a, b) > 1) {
			cout << 0 << endl;

		} else if (__gcd(a + 1, b) > 1 or __gcd(a, b + 1) > 1 ) {
			cout << 1 << endl;

		} else {
			cout << 2 << endl;
		}



	}

	return 0;
}