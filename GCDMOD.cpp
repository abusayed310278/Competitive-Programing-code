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



const int MOD = 1e9 + 7;

long long bpow(long long a, long long b, long long mod = MOD)
{
	long long res = 1;

	while (b)
	{
		if (b & 1)
			res = ((__int128)res * a) % mod;
		a = ((__int128)a * a) % mod;

		b >>= 1;
	}

	return res;
}

void solve()
{
	long long a, b, n;

	cin >> a >> b >> n;

	if (a == b)
	{
		cout << (bpow(a, n) + bpow(b, n)) % MOD << '\n';
	} else
	{
		long long d = (bpow(a, n, a - b) + bpow(b, n, a - b)) % (a - b);

		cout << __gcd(d, a - b) << '\n';
	}
}

int main()
{

	cp();
	int t;
	cin >> t;

	while (t -- > 0)
		solve();

	return 0;
}
