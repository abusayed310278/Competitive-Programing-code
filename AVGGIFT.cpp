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


int main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		ll n, x; cin >> n >> x;
		vector<ll>a(n + 1);

		ll maxi = INT_MIN, mini = INT_MAX;

		for (ll i = 1; i <= n; i++) {
			cin >> a[i];
			maxi = max(maxi, a[i]);
			mini = min(mini, a[i]);
		}

		if (maxi >= x and mini <= x)puts("YES"); else puts("NO");

	}

	return 0;
}