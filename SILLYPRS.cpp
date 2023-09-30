#include<bits/stdc++.h>
#define endl "\n"
#define int long long
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



signed main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n), b(n);

		int odd_a = 0, even_a = 0, odd_b = 0, even_b = 0, ans = 0, miss = 0, sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
			if (a[i] & 1)odd_a++; else even_a++;
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
			sum += b[i];
			if (b[i] & 1)odd_b++; else even_b++;
		}

		miss = n - (min(even_b, even_a) + min(odd_a, odd_b));
		ans = (sum - miss) / 2;
		cout << ans << endl;

	}

	return 0;
}