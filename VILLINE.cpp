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
	ll n; cin >> n;
	ll m, c; cin >> m >> c;

	ll a = 0, b = 0;
	ll x, y, p;
	while (n--) {

		cin >> x >> y >> p;
		ll val = y - m * x - c;
		if (val > 0)a += p; else b += p;


	}
	cout << max(a, b) << endl;

	return 0;
}