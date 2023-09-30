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

int power(int a, int b) {

	int res = 1;
	a %= mod;

	while (b > 0) {

		if (b & 1)res = (res * a) % mod;

		a = (a * a) % mod;
		b >>= 1;
	}

	return res;

}

int main()
{

	cp();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << power(3, n) << endl;

	}

	return 0;
}