#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




ll n, f[100];

int main()
{

	ios::sync_with_stdio(false);			//Not
	cin.tie(NULL);							//this.
	cout.tie(0);							//or this.

#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

	f[0] = 0;
	f[1] = 1;

	for (ll i = 2; i < 60; i++) {
		f[i] = f[i - 1] + f[i - 2];
		f[i] %= 10;
	}


	ll t;
	cin >> t;
	while (t--) {
		
		cin >> n;


		ll pos = 0;
		while (n >>= 1) ++pos;
		n = ((ll) pow(2, pos) - 1) % 60;

		cout << f[n] << "\n";
	}

	return 0;
}