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

		int a, b, n; cin >> a >> b >> n;--n;

		int x = a ^ b;
		if (x == 0) {
			cout << "0\n";
		} else if (x <= n) {
			cout << "1\n";
		} else if (n != 0 and __lg(x) == __lg(n)) {
			cout << "2\n";
		} else {
			cout << "-1\n";
		}
	}

	return 0;
}