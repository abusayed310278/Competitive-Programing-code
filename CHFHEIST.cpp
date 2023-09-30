#include<bits/stdc++.h>
#define endl "\n"
#define ll long long int
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

		ll D, d, p, Q; cin >> D >> d >> p >> Q;
		ll a = p;
		ll n = D / d;
		ll diff = Q;


		ll rem = D % d;

		ll s1 = d * (n * (2 * a + (n - 1) * diff) / 2);
		ll s2 = rem * (a + (n * diff));

		ll ans = s1 + s2;

		cout << ans << endl;
	}



	return 0;
}