#include<bits/stdc++.h>
#define endl "\n"
#define int long long int
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



int32_t main()
{

	cp();
	int t; cin >> t;
	while (t--) {

		int n; cin >> n;
		vi a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		vi prefix(n);
		prefix[0] = a[0];

		for (int i = 1; i < n; i++) {
			prefix[i] = __gcd(prefix[i - 1], a[i]);
		}

		vi suffix(n);
		suffix[n - 1] = a[n - 1];

		for (int i = n - 2; i >= 0; i--) {
			suffix[i] = __gcd(suffix[i + 1], a[i]);
		}


		int ans = 0;
		for (int i = 0; i < n; i++) {

			if (i == 0 and suffix[i + 1] > 1)ans++;
			else if (i == n - 1 and prefix[n - 2] > 1)ans++;
			else if (__gcd(prefix[i - 1], suffix[i + 1]) > 1)ans++;

		}

		cout << ans << endl;


	}



	return 0;
}