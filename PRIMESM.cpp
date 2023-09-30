#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}



int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ll a, b; cin >> a >> b;

		if (a < 2 || b < 2) {
			cout << -1 << endl;
		}

		else if ( __gcd(a, b) == 1) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;

		}

	}


	return 0;
}