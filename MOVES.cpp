



#include<bits/stdc++.h>
#define int long long
const int mod = 1e9 + 7;
const int N = 5005;
using namespace std;

inline void cp() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif

}


vector<int> fact(N);

void f()
{
	fact[0] = 1;
	for (int i = 1; i < N; i++) fact[i] = (fact[i - 1] * i) % mod;
}

int powMod(int a, int b)
{
	if (!b) return 1;
	int x = powMod(a, b / 2);
	x = (x * x) % mod;
	if (b % 2) x = (x * a) % mod;
	return x;
}

int nCr(int n, int r)
{
	int num = fact[n];
	int den = fact[r] * fact[n - r];
	den %= mod;
	num = num * powMod(den, mod - 2);
	return num % mod;
}

int32_t main()
{
	cp();
	f();
	while (1)
	{
		int n, k; cin >> n >> k;
		if (n == 0 && k == 0) break;
		int a = nCr(n - 2, k / 2);
		int b = nCr(n - 2, (k - 1) / 2);
		int ans = (2 * a * b);
		cout << ans % mod << endl;
	}
}
