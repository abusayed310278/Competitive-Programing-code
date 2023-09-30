#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ll long long
#define l long
#define f  first;
#define s  second;
#define pb  push_back;

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
const int N = 1e5 + 5;

int fact[N], invfact[N];

void precompute() {

	fact[0] = fact[1] = 1;
	for (int i = 2; i < N; i++) {
		fact[i] = fact[i - 1] * i;
	}

	invfact[N - 1] = modinv(fact[N - 1]);
	for (int i = N - 2; i >= 0; i--) {
		invfact[i] = invfact[i + 1] * (i + 1);
		invfact[i] %= mod;
	}

}

int power(int a, int b, int m) {

	int res = 1;
	a %= m;

	while (b > 0) {

		if (b & 1)res = res * a % m;
		a = a * a % m;
		b >>= 1;

	}

	return res;
}

int modinv(int k) {

	return power(k, mod - 2, mod);
}

int ncr(int n, int r) {

	if (n < r || n < 0 || r < 0)return 0;

	return (fact[n] * invfact[r] % mod) * invfact[n - r] % mod;
}


int main()
{

	cp();
	int t; cin >> t;


	return 0;
}