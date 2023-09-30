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



int main(void) {

	cp();

	ll n;
	vector<ll> isPrime(1e6 + 5, true);
	vector<ll> primes;

	isPrime[0] = isPrime[1] = false;

	for (ll i = 2; i <= 1e6 + 3; ++i) {
		if (isPrime[i]) {
			primes.push_back(i);
			for (ll j = i * i; j <= 1e6 + 3; j += i) {
				isPrime[j] = false;
			}
		}
	}

	while (cin >> n && n != 0) {
		bool found = false;

		for (ll i = 0; !found && i < primes.size(); ++i) {
			ll m = n - primes[i] * primes[i] * primes[i];
			if (m < 0) break;

			for (ll j = 0; !found && j < primes.size(); ++j) {
				ll p = m - primes[j] * primes[j];
				if (p < 0) break;

				if (isPrime[p]) {
					cout << p << " " << primes[j] << " " << primes[i] << "\n";
					found = true;
					break;
				}
			}
		}

		if (!found) {
			cout << "0 0 0\n";
		}
	}
}