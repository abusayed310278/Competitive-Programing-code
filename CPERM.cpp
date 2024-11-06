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



const int mod = 1e9 + 7;

ll power(ll a, ll b) {

	if (b == 0) {
		return 1;
	}

	ll res = power(a, b / 2);
	if (b & 1) {
		return (res * res * a) % mod;
	} else {
		return (res * res) % mod;
	}

}

void solve() {

	int n; cin >> n;

	if (n == 1) {
		cout << 0 << endl;
		return;
	}



	cout << (( power(2, n - 1) - 2) + mod) % mod << endl;

}

int main()
{


	int t = 1; cin >> t;
	while (t--) {
		solve();

	}

	return 0;
}